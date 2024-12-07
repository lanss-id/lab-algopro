#include <stdio.h>
#include <math.h>

int gcd(int a, int b) {
    while (b) {
        int nilai = b;
        b = a % b;
        a = nilai;
    }
    return a;
}

int main() {
    int N;
    scanf("%d", &N);

    int jumlah = 0;

    for (int i = N - 1; i >= 2; i--) {
        if (gcd(N, i) == 1) {
            jumlah++;
        }
    }

    printf("%d\n", jumlah);
    return 0;
}
