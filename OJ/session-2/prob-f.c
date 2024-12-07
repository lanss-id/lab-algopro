#include <stdio.h>

int main() {
    char nama[100], id[9], kode[6];
    int i, panjang_id;

    // baca setiap karakter dari nama
    for (i = 0; i < 99; i++) {
        nama[i] = getchar();
        if (nama[i] == '\n' || nama[i] == EOF) break;
    }
    nama[i] = '\0';

    // membaca id nya
    for (i = 0; i < 8; i++) {
        id[i] = getchar();
        if (id[i] == '\n' || id[i] == EOF) break;
    }
    id[i] = '\0';

    // memperhitungkan id dari inputan diatas
    for (panjang_id = 0; id[panjang_id] != '\0'; panjang_id++);

    // validasi (opsional)
    if (panjang_id < 3 || panjang_id > 8) {
        printf("Panjang ID harus antara 3 dan 8 karakter\n");
        return 1;
    }

    // generate unik code nya
    kode[0] = nama[0];
    if (kode[0] >= 'a' && kode[0] <= 'z') kode[0] -= 32;

    kode[1] = nama[0];
    for (i = 1; nama[i] != '\0'; i++) {
        kode[1] = nama[i];
    }
    if (kode[1] >= 'a' && kode[1] <= 'z') kode[1] -= 32;

    kode[2] = id[0];
    kode[3] = id[panjang_id / 2];
    kode[4] = id[panjang_id - 1];
    kode[5] = '\0';

    printf("%s\n", kode);

    return 0;
}
