#include <stdio.h>


int main() {
    int T;
    double a, b, c, d;

    scanf("%d", &T);
    getchar();
    double sum[T];

    int x, y;
    for (x = 0; x < T; x++) {
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
        getchar();
        sum[x] = 2 * a + 2 * b + 4 * c / 3 + d / 2;
    }

    for (y = 0; y < T; y++) {
        printf("%.2lf\n", sum[y]);
    }
    return 0;
}
