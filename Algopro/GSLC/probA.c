#include <stdio.h>
#include <string.h>

#define MOD 1000000000
#define MAX_HEIGHT 1000
#define MAX_BRANCHES 1000

long long memo[MAX_HEIGHT + 1][MAX_BRANCHES + 1][2];

long long countBranches(int height, int branches, int currentHeight, int isSpecialBranch) {
    if (memo[currentHeight][branches][isSpecialBranch] != -1) {
        return memo[currentHeight][branches][isSpecialBranch];
    }

    if (currentHeight > height) {
        return 0;
    }

    long long totalBranches = 0;

    if (currentHeight == 1 || !isSpecialBranch) {
        for (int i = 0; i < branches; i++) {
            int special = (i == branches - 1) ? 1 : 0;

            long long subBranches = countBranches(
                height,
                (currentHeight == height) ? 1 : (branches - 1),
                currentHeight + 1,
                special
            );

            totalBranches += subBranches + 1;
        }
    }
    else {
        totalBranches = countBranches(
            height,
            1,
            currentHeight + 1,
            0
        ) + 1;
    }

    totalBranches %= MOD;
    memo[currentHeight][branches][isSpecialBranch] = totalBranches;

    return totalBranches;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int M, N;
        scanf("%d %d", &M, &N);

        memset(memo, -1, sizeof(memo));

        long long result = countBranches(M, N, 1, 0);

        printf("Case #%d: %lld\n", t, result);
    }

    return 0;
}
