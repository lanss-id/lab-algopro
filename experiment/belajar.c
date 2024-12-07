// #include <stdio.h>

// int main () {
//     // int T, inputAngka;
//     // scanf("%d", &T);
//     // for (int i = 1; i <= T; i++)
//     // {
//     //     scanf("%d", &inputAngka);
//     //     if(inputAngka % 2 == 0) {
//     //         printf("Laki-laki");
//     //     } else {
//     //         printf("perempuan");
//     //     }
//     // }
//     // return 0;

//     // char warna[][4] = {"merah", "kuning", "hijau"};
//     // *(warna +2) = "biru";

//     // for (int i = 0; i < sizeof(warna); i++) {
//     //     printf("%s", warna[i]);
//     // }



//     return 0;
// }


#include <stdio.h>
#include <string.h>

int main() {
    char warna[][3] = {"merah", "kuning", "hijau"};
    char *ptr = warna[2];  // Pointer ke elemen ke-2

    // Mengganti elemen warna ke-2 menjadi "biru" menggunakan pointer
    strle(ptr);

    // Menampilkan semua elemen warna
    for (int i = 0; i < 3; i++) {
        printf("%s\n", *(warna + i));
    }

    return 0;
}
