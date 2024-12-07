#include <stdio.h>

int jobonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1 || n == 2) {
        return 1;
    } else if (n % 3 == 0) {
        return 10;
    }

    return jobonacci(n - 1) + jobonacci(n - 2);
}

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", jobonacci(i));
    }
    printf("\n");

    return 0;
}
