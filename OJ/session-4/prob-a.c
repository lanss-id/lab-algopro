#include <stdio.h>

int main() {
    double input;
    int dp, dk;

    scanf("%lf", &input);

    dp = ((int)(input * 10)) % 10;
    dk = ((int)(input * 100)) % 10;

    if ((dp % 2 == 0 && dk % 2 == 0) ||
        (dp % 2 != 0 && dk % 2 != 0)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
