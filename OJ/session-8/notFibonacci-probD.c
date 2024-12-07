#include <stdio.h>

long long fibonacci(int n, long long f0, long long f1) {
    if (n == 0) return f0;
    if (n == 1) return f1;

    long long fn;
    for (int i = 2; i <= n; i++) {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    return fn;
}

int main() {
    long long f0, f1;
    int k;

    scanf("%lld %lld", &f0, &f1);
    scanf("%d", &k);

    long long result = fibonacci(k, f0, f1);
    printf("%lld\n", result);

    return 0;
}
