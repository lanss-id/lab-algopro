#include <stdio.h>

int main() {
    float harga, berat, total;

    scanf("%f", &harga);
    scanf("%f", &berat);

    total = harga * (berat / 1000);

    printf("%.2f\n", total);

    return 0;
}
