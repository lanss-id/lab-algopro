#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#include <termios.h>

// Ukuran peta
#define WIDTH 20
#define HEIGHT 10

// Karakter yang digunakan untuk menggambarkan peta
#define PACMAN 'P'
#define GHOST 'G'
#define WALL '#'
#define FOOD '.'
#define EMPTY ' '

// Peta
char map[HEIGHT][WIDTH] = {
    "###################",
    "#P .   .   .   .  #",
    "# ### ### ### ### #",
    "# .   .   .   .   #",
    "##### ##### ##### #",
    "# .   .   .   .   #",
    "# ### ### ### ### #",
    "#   .   .   .   . #",
    "###################",
};

// Posisi Pacman dan Ghost
int pacmanX = 1, pacmanY = 1;
int ghostX = 18, ghostY = 1;
bool gameOver = false;

void drawMap() {
    system("clear");
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            printf("%c", map[i][j]);
        }
        printf("\n");
    }
}

// Fungsi untuk memindahkan Pacman
void movePacman(char direction) {
    int newX = pacmanX;
    int newY = pacmanY;

    if (direction == 'w') newY--;
    if (direction == 's') newY++;
    if (direction == 'a') newX--;
    if (direction == 'd') newX++;

    // Pastikan posisi baru Pacman tidak keluar dari batas
    if (newX >= 0 && newX < WIDTH && newY >= 0 && newY < HEIGHT) {
        // Cek apakah posisi baru Pacman adalah dinding
        if (map[newY][newX] != WALL) {
            // Jika Pacman bergerak ke makanan, makan makanannya
            if (map[newY][newX] == FOOD) {
                map[newY][newX] = EMPTY;
            }

            // Pindahkan Pacman ke posisi baru
            map[pacmanY][pacmanX] = EMPTY;
            pacmanX = newX;
            pacmanY = newY;
            map[pacmanY][pacmanX] = PACMAN;
        }
    }
}

// Fungsi untuk memindahkan Ghost (bergerak acak)
void moveGhost() {
    int direction = rand() % 4;
    int newX = ghostX;
    int newY = ghostY;

    if (direction == 0) newY--;  // ke atas
    if (direction == 1) newY++;  // ke bawah
    if (direction == 2) newX--;  // ke kiri
    if (direction == 3) newX++;  // ke kanan

    // Pastikan posisi baru Ghost tidak keluar dari batas
    if (newX >= 0 && newX < WIDTH && newY >= 0 && newY < HEIGHT) {
        // Cek apakah posisi baru Ghost adalah dinding
        if (map[newY][newX] != WALL && map[newY][newX] != PACMAN) {
            // Pindahkan Ghost ke posisi baru
            map[ghostY][ghostX] = EMPTY;
            ghostX = newX;
            ghostY = newY;
            map[ghostY][ghostX] = GHOST;
        }

        // Cek apakah Ghost menangkap Pacman
        if (ghostX == pacmanX && ghostY == pacmanY) {
            gameOver = true;
        }
    }
}

// Fungsi untuk mengecek apakah semua makanan sudah dimakan
bool isGameWon() {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (map[i][j] == FOOD) {
                return false;
            }
        }
    }
    return true;
}

// Fungsi untuk mengatur terminal ke mode non-canonical
void enableRawMode() {
    struct termios term;
    tcgetattr(0, &term);
    term.c_lflag &= ~(ICANON | ECHO);  // Matikan mode canonical dan echo
    tcsetattr(0, TCSANOW, &term);
}

// Fungsi untuk mengembalikan terminal ke mode semula
void disableRawMode() {
    struct termios term;
    tcgetattr(0, &term);
    term.c_lflag |= (ICANON | ECHO);  // Nyalakan kembali mode canonical dan echo
    tcsetattr(0, TCSANOW, &term);
}

// Fungsi untuk mengecek apakah ada input yang ditekan
int kbhit() {
    struct timeval tv = {0L, 0L};
    fd_set fds;
    FD_ZERO(&fds);
    FD_SET(0, &fds);
    return select(1, &fds, NULL, NULL, &tv);
}

// Fungsi untuk membaca input karakter
char getch() {
    char buf = 0;
    if (read(0, &buf, 1) < 0) {
        perror("read()");
    }
    return buf;
}

int main() {
    srand(time(0));  // Inisialisasi random untuk pergerakan Ghost

    enableRawMode();  // Aktifkan mode input non-blocking

    while (!gameOver) {
        drawMap();

        // Cek apakah pemain menang
        if (isGameWon()) {
            printf("You Win!\n");
            break;
        }

        // Input dari pemain
        if (kbhit()) {
            char input = getch();
            movePacman(input);
        }

        // Pindahkan Ghost
        moveGhost();

        // Delay sejenak
        usleep(200000);  // Tunggu 200ms
    }

    disableRawMode();  // Kembalikan terminal ke mode normal

    if (gameOver) {
        printf("Game Over! You were caught by the Ghost!\n");
    }

    return 0;
}
