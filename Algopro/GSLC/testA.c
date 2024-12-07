#include <stdio.h>

#define MOD 1000000000

long long countBranches(int height, int branches, int currentHeight, int isSpecialBranch) {
    if (currentHeight > height) {
        return 0;
    }

    long long totalBranches = 0;

    if (currentHeight == 1 || !isSpecialBranch) {
        for (int i = 0; i < branches; i++) {
            int special = (i == branches - 1) ? 1 : 0;
            int nextBranches = (currentHeight == height) ? 1 : (branches - 1);
            totalBranches += (countBranches(height, nextBranches, currentHeight + 1, special) + 1);
        }
    } else {
        totalBranches = (countBranches(height, 1, currentHeight + 1, 0) + 1);
    }

    return totalBranches % MOD;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int M, N;
        scanf("%d %d", &M, &N);

        long long result = countBranches(M, N, 1, 0);
        printf("Case #%d: %lld\n", t, result);
    }

    return 0;
}
