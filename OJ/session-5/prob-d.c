#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    char hasil[T][12];

    for (int i = 0; i < T; i++) {
        long long A, B, C;
        scanf("%lld %lld %lld", &A, &B, &C);


        if (A + B > C && B + C > A && C + A > B) {

            snprintf(hasil[i], sizeof(hasil[i]), "BISA");
        } else {

            snprintf(hasil[i], sizeof(hasil[i]), "TIDAK BISA");
        }
    }

    for (int i = 0; i < T; i++) {
        printf("%s\n", hasil[i]);
    }

    return 0;
}
