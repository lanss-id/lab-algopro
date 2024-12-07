#include <stdio.h>

int main() {
    int T;  
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        long long N, M;
        scanf("%lld %lld", &N, &M);

        if ((N * M) % 2 == 1) {
            printf("Case #%d: Need more frogs\n", i);
        } else {
            printf("Case #%d: Party time!\n", i);
        }
    }

    return 0;
}
