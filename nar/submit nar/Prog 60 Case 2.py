import re

fish_list = []

def validate_fish_name(fish_name):
    pattern = r"^[A-Z][a-zA-Z]*#[0-9]{3}$"
    fish_name = fish_name.strip()
    if re.match(pattern, fish_name):
        return True
    return False

#fungsi nambah ikan
def add_fish():
    fish_name = input("Input nama ikan (format: Nama#123): ").strip()
    if validate_fish_name(fish_name):
        fish_list.append(fish_name)
        print(f"Ikan {fish_name} berhasil ditambah")
    else:
        print("Nama ikan tidak valid, dimulai dengan Uppercase, diikuti #, dan 3 digit angka")

#fungsi liat list ikan
def view_fish():
    if len(fish_list) == 0:
        print("Belum ada ikan, coba tambahin")
    else:
        print("List ikan yang tersedia:")
        for i, fish in enumerate(fish_list):
            print(f"{i + 1}. {fish}")

#fungsi update nama ikannya
def update_fish():
    view_fish()
    if len(fish_list) == 0:
        return
    try:
        index = int(input("Pilih nomor ikan yang mau diupdate: ")) - 1
        if 0 <= index < len(fish_list):
            new_fish_name = input("Input nama ikan baru (format: Nama#123): ").strip()
            if validate_fish_name(new_fish_name):
                fish_list[index] = new_fish_name
                print("Nama ikan berhasil diupdate")
            else:
                print("Nama ikan baru tidak valid")
        else:
            print("Nomor ikan tidak valid")
    except ValueError:
        print("Input tidak valid, harus berupa angka")

#tampilan menu pertama
def show_menu():
    print("\n=== Menu Program Book of PIsh ===")
    print("1. Tambah Ikan Baru")
    print("2. Lihat List Ikan")
    print("3. Update Nama Ikan")
    print("4. Keluar")

def main():
    while True:
        show_menu()
        pilihan = input("Pilih menu (1/2/3/4): ").strip()

        if pilihan == '1':
            add_fish()
        elif pilihan == '2':
            view_fish()
        elif pilihan == '3':
            update_fish()
        elif pilihan == '4':
            print("Keluar dari program.")
            break
        else:
            print("Pilihan tidak valid, silakan coba lagi.")

if __name__ == "__main__":
    main()
