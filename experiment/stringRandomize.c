#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h> // untuk fungsi sleep pada sistem berbasis Unix

// Kumpulan karakter yang digunakan untuk randomisasi (huruf, angka, dan simbol)
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-=_+[]{}|;:',.<>?/`~";

void generateRandomString(char *randomString, const char *targetString) {
    int length = strlen(targetString);
    int charsetSize = sizeof(charset) - 1;  // Menghitung jumlah karakter dalam charset

    // Untuk setiap karakter dalam string target
    for (int i = 0; i < length; i++) {
        if (targetString[i] == ' ') {  // Langsung set spasi
            randomString[i] = ' ';
            continue;
        }

        // Mengacak hingga mendapatkan karakter yang sesuai
        while (randomString[i] != targetString[i]) {
            randomString[i] = charset[rand() % charsetSize];  // Menghasilkan karakter acak dari charset
            printf("\r%s", randomString);  // Tampilkan progress di satu baris
            fflush(stdout);  // Memaksa buffer untuk segera di-output
            usleep(50000);  // Delay 50ms (50000 microseconds)
        }
    }
    printf("\n");  // Baris baru setelah selesai
}

int main() {
    char targetString[1000];

    srand(time(0));  // Inisialisasi seed random number generator

    printf("Masukkan string target: ");
    scanf("%[^\n]", targetString);  // Membaca input dari user

    int length = strlen(targetString);
    char randomString[length + 1];  // Buffer untuk random string

    // Inisialisasi randomString dengan spasi atau karakter awal
    for (int i = 0; i < length; i++) {
        randomString[i] = ' ';  // Isi awal dengan spasi
    }
    randomString[length] = '\0';  // Menambahkan null terminator di akhir string

    printf("Target: %s\n", targetString);
    printf("Generating...\n");

    generateRandomString(randomString, targetString);  // Jalankan brute force

    printf("Final Result: %s\n", randomString);

    return 0;
}
