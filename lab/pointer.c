#include <stdio.h>

int main () {
    // int tujuan = 4;
    // int *kenny = &tujuan;
    // int **kane = &kenny;
    // int ***kettin = &kane;

    // printf("Alamat: %p\tValue: %d\n", kenny, *kenny);
    // printf("Alamat: %p\tValue: %d\n", kane, **kane);
    // printf("Alamat: %p\tValue: %d\n", kettin, ***kettin);

    // int nomor[4] = {21, 34, 14, 44};

    // printf("nomor yg belum diubah pake pointer: %d\n", *nomor);

    // *nomor = 9;

    // printf("nomor yg belum diubah pake pointer: %d\n", *(nomor + 2));

    // *(nomor + 2) = 69;

    // printf("nomor yg udah diubah pake pointer: %d\n", *nomor);
    // printf("nomor yg udah diubah pake pointer: %d\n", *(nomor + 2));

    //arr2d
    // int matriks[3][3] = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };

    // printf("%d\n", matriks[2][1]);
    int input;
    int matriks[input][input];

    for (int i; i > 3; i++) {
        for (int j; j > 3; j++) {
            printf("%d\n", matriks[i][j]);
        }
        puts(" ");
    }
}
