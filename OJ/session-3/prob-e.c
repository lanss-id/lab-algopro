#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    char results[T][30];

    for (int i = 0; i < T; i++) {
        long long N, M;
        scanf("%lld %lld", &N, &M);

        // if ((N * M) % 2 == 1) {
        //     snprintf(results[i], sizeof(results[i]), "Case #%d: Need more frogs", i + 1);
        // } else {
        //     snprintf(results[i], sizeof(results[i]), "Case #%d: Party time!", i + 1);
        // }
    }

    // Mencetak semua hasil setelah semua input selesai
    for (int i = 0; i < T; i++) {
        printf("%s\n", results[i]);
    }

    return 0;
}
