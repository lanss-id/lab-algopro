#include <stdio.h>
#include <string.h>

int main() {
    int input;
    scanf("%d", &input);

    int reversed = 0;

    while (input != 0) {
        int digit = input % 10;
        reversed = reversed * 10 + digit;
        input /= 10;
    }

    printf("%d\n", reversed);

    return 0;
}
