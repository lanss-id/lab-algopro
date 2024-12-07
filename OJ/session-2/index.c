#include <stdio.h>

int main() {
    char k[20];
    int kata;
    int i;

    // Membaca dan memproses 2 baris
    for (kata = 0; kata < 2; kata++) {
        // Mengulang setiap kata untuk menambahkan bahasa alien
        for (i = 0; i < 3; i++) {  // Untuk memasukkan bahasa aliennya di setiap kata
            scanf("%s", k);
            printf("%sszs ", k);  // Menambahkan "szs" di akhir setiap kata
        }
        printf("\n");
    }

    return 0;
}
