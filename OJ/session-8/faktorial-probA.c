#include <stdio.h>
#include <math.h>

int factors(int n) {
    int count = 0;
    int sqrt_n = (int)sqrt(n);

    for (int i = 1; i <= sqrt_n; i++) {
        if (n % i == 0) {
            count++;
            if (i != n / i) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int case_num = 1; case_num <= T; case_num++) {
        int N;
        scanf("%d", &N);

        int factorCount = factors(N);
        printf("Case #%d: %d\n", case_num, factorCount);
    }

    return 0;
}
