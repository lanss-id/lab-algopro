#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N >= 64) {
        return 1;
    }

    unsigned long long menang = (1ULL << N) - 1;

    printf("%llu\n", menang);

    return 0;
}
