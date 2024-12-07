#include <stdio.h>

int main() {
    int T, A, B, result, place, digitA, digitB, sum;

    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        scanf("%d %d", &A, & B);
        result = 0;
        place = 1;

        while (A > 0 || B > 0) {
            digitA = A % 10;
            digitB = B % 10;
            sum = (digitA + digitB) % 10;

            result = result + sum * place;
            place *= 10;

            A /= 10;
            B /= 10;
        }

        printf("Case #%d: %d\n", i, result);
    }

    return 0;
}
