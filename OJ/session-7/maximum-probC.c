#include <stdio.h>

void maximum(int case_num) {
    int N;
    scanf("%d", &N);

    long long max1, max2;
    scanf("%lld", &max1);
    scanf("%lld", &max2);

    if (max2 > max1) {
        long long temp = max1;
        max1 = max2;
        max2 = temp;
    }

    for(int i = 2; i < N; i++) {
        long long current;
        scanf("%lld", &current);

        if (current > max1) {
            max2 = max1;
            max1 = current;
        } else if (current > max2) {
            max2 = current;
        }
    }

    printf("Case #%d: %lld\n", case_num, max1 + max2);
}

int main() {
    int T;
    scanf("%d", &T);

    for(int t = 1; t <= T; t++) {
        maximum(t);
    }

    return 0;
}
