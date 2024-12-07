#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);

    int mtr[input][input];
    for (int i = 0; i < input; i++) {
        for (int j = 0; j < input; j++) {
            scanf("%d", &mtr[i][j]);
        }
    }

    for (int j = 0; j < input; j++) {
        for (int i = 0; i < input; i++) {
            printf("%d", mtr[i][j]);
            if (i < input - 1) {
                printf(" ");
            }
        }
         printf("\n");
   }
    return 0;
}
