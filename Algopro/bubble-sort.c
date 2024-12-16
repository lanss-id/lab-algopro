#include <stdio.h>

int main () {
    int data[] = {6, 5, 3, 1, 4, 7, 2};
    int n = sizeof(data) / sizeof(data[0]);
    int i, j, temp;
    printf("%d\n", n);
    for (i = 0; i < n; i++)
    {
        printf("%d", data[i]);
    }
    printf("\n");


    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if(data[j] > data[j + 1]) {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d", data[i]);
    }
    printf("\n");
}
