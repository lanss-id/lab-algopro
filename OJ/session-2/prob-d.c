#include <stdio.h>

int main()
{
    int angka[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &angka[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", (angka[i] / 10) % 10);
    }

    return 0;
}
