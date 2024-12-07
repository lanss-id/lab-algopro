import random

SYMBOLS = ['♥', '♦', '♣', '♠']
LIVES = 3

def home_page():
    print("Welcome ke NeLcard!")
    print("1. Main")
    print("2. Keluar")

    while True:
        pilihan = input("Pilih menu (1 atau 2): ")
        if pilihan == '1':
            play_game()
            break
        elif pilihan == '2':
            print("Dadah!")
            exit()
        else:
            print("Pilihan gak valid. Coba lagi")

def generate_cards():
    cards = SYMBOLS * 4
    random.shuffle(cards)
    return [cards[i:i + 4] for i in range(0, 16, 4)]

def display_cards(cards, revealed, lives):
    size = len(cards)
    print(f"\nNyawa sisa: {lives}")

    header = "     " + "   ".join(f"{i + 1}" for i in range(size))
    print(header)
    print("   +" + "---+" * size)

    for i in range(size):
        row = f"{i + 1:2} |"
        for j in range(size):
            row += f" {cards[i][j]} |" if revealed[i][j] else " ? |"
        print(row)
        print("   +" + "---+" * size)

def get_coordinates():
    while True:
        try:
            x, y = map(int, input("Masukin koordinat x, y (Ex: 3 1 ): ").split())
            if 1 <= x <= 4 and 1 <= y <= 4:
                return x - 1, y - 1
            else:
                print("Koordinat harus 1-4.")
        except ValueError:
            print("Input gak valid, coba lagi")

def play_game():
    cards = generate_cards()
    revealed = [[False] * 4 for _ in range(4)]
    lives = LIVES
    matches = 0

    print("Ini kartunya, perhatikan baik-baik")
    display_cards(cards, [[True] * 4 for _ in range(4)], lives)

    input("Tekan Enter untuk mulai bermain...")

    while lives > 0 and matches < 8:
        display_cards(cards, revealed, lives)

        print("Pilih kartu pertama:")
        x1, y1 = get_coordinates()

        while revealed[x1][y1]:
            print("Kartu udah dibuka, pilih yang lain")
            x1, y1 = get_coordinates()

        revealed[x1][y1] = True
        display_cards(cards, revealed, lives)

        print("Pilih kartu kedua:")
        x2, y2 = get_coordinates()

        while (x1 == x2 and y1 == y2) or revealed[x2][y2]:
            if x1 == x2 and y1 == y2:
                print("Kartu harus beda")
            else:
                print("Kartu udah dibuka, pilih yang lain")
            x2, y2 = get_coordinates()

        revealed[x2][y2] = True
        display_cards(cards, revealed, lives)

        if cards[x1][y1] == cards[x2][y2]:
            print("Cocok")
            matches += 1
        else:
            print("Gak cocok")
            revealed[x1][y1] = revealed[x2][y2] = False
            lives -= 1

    if matches == 8:
        print("Kamu menang")
    else:
        print("Nyawamu habis. Game over")

if __name__ == "__main__":
    home_page()
