#include <stdio.h>

int main() {
    int N, K;

    scanf("%d %d", &N, &K);

    int P[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &P[i]);
    }

    for (int i = 0; i <= N - K; i++) {
        int max = P[i];

        for (int j = 1; j < K; j++) {
            if (P[i + j] > max) {
                max = P[i + j];
            }
        }

        printf("%d ", max);
    }

    printf("\n");
    return 0;
}
