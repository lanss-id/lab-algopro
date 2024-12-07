#include <stdio.h>

long long climbStairs(int n) {
    if (n <= 2) return n;

    long long prev = 1;
    long long curr = 2;
    long long next;

    for (int i = 3; i <= n; i++) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }

    return curr;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%lld\n", climbStairs(n));

    return 0;
}
