#include <stdio.h>

int main() {
    int T, N, P, Q;
    int testCase;

    scanf("%d", &T);

    for (testCase = 1; testCase <= T; testCase++) {
        scanf("%d", &N);

        int arr[1000];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        scanf("%d %d", &P, &Q);

        int bibiValue = arr[P-1];
        int liliValue = arr[Q-1];

        char* winner;
        if (bibiValue > liliValue) {
            winner = "Bibi";
        } else if (liliValue > bibiValue) {
            winner = "Lili";
        } else {
            winner = "Draw";
        }

        printf("Case #%d : %s\n", testCase, winner);
    }

    return 0;
}
