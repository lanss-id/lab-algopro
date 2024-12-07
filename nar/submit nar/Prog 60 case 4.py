def gambar_parallelogram(w, h, arah):
    if arah == 'r':
        for i in range(h):
            print(' ' * (h - i - 1) + '*' * w if i == 0 or i == h - 1 else ' ' * (h - i - 1) + '*' + ' ' * (w - 2) + '*')
    elif arah == 'l':
        for i in range(h):
            print(' ' * i + '*' * w if i == 0 or i == h - 1 else ' ' * i + '*' + ' ' * (w - 2) + '*')
    else:
        print("Arah nggak valid!")

w, h = map(int, input("Masukin lebar sama tinggi: ").split())
arah = input("Arah mau ke mana nih? (r/l): ")

gambar_parallelogram(w, h, arah)
