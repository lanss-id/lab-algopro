#include <stdio.h>

int main() {
    int N, M;
    int senjata_op = 0;
    int serangan_op = 0;
    int senjata, serangan;

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        scanf("%d", &senjata);
        if (senjata > senjata_op) {
            senjata_op = senjata;
        }
    }

    for (int i = 0; i < M; i++) {
        scanf("%d", &serangan);
        if (serangan > serangan_op) {
            serangan_op = serangan;
        }
    }

    if (senjata_op > serangan_op) {
        printf("The dark secret was true\n");
    } else {
        printf("Secret debunked\n");
    }

    return 0;
}
