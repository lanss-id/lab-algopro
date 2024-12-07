#include <stdio.h>

int main() {
    int T, N, table[500][500], sum[500];
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        scanf("%d", &N);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &table[i][j]);
            }
        }

        for (int j = 0; j < N; j++) {
            sum[j] = 0;
            for (int i = 0; i < N; i++) {
                sum[j] += table[i][j];
            }
        }

        printf("Case #%d: ", t);
        for (int j = 0; j < N; j++) {
            if (j > 0) printf(" ");
            printf("%d", sum[j]);
        }
        printf("\n");
    }

    return 0;
}
