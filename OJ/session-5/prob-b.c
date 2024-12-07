#include <stdio.h>

int main() {
    int N, Q;

    scanf("%d", &N);

    int tayangan[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &tayangan[i]);
    }

    scanf("%d", &Q);

    int hasil[Q];

    for (int i = 0; i < Q; i++) {
        int Ai, Bi;
        scanf("%d %d", &Ai, &Bi);

        int total = 0;
        for (int j = Ai - 1; j < Bi; j++) {
            total += tayangan[j];
        }

        hasil[i] = total;
    }

    for (int i = 0; i < Q; i++) {
        printf("Case #%d: %d\n", i + 1, hasil[i]);
    }

    return 0;
}
