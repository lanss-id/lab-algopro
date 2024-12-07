#include <stdio.h>

int main() {
    int T, A, B;

    scanf("%d", &T);

    int hasil[T];

    for (int t = 0; t < T; t++) {
        scanf("%d %d", &A, &B);

        int total_madu = A;
        int bk = A;

        while (bk >= B) {
            int bb = bk / B;
            total_madu += bb;
            bk = bk % B + bb;
        }

        hasil[t] = total_madu;
    }

    for (int t = 0; t < T; t++) {
        printf("Case #%d: %d\n", t + 1, hasil[t]);
    }

    return 0;
}
