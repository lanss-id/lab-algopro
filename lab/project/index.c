#include <stdio.h>
#include <string.h>

int main()
{
    char shape[10];
    int size[3] = {0};
    int sum = 0;

    while (1)
    {
        scanf("%s", shape);
        if (strcmp(shape, "0") == 0)
        {
            break;
        }
        if (strcmp(shape, "P") == 0)
        {
            scanf("%d", &size[0]);
            sum = size[0] * size[0];
            printf("%d\n", sum);
        }
        else if (strcmp(shape, "S") == 0)
        {
            scanf("%d %d", &size[0], &size[1]);
            sum = size[0] * size[1];
            printf("%d\n", sum);
        }
        else if (strcmp(shape, "T") == 0)
        {
            scanf("%d %d %d", &size[0], &size[1], &size[2]);
            sum = 0.5 * (size[0] + size[2]) * size[2];
            printf("%d\n", sum);
        }
    }
    return 0;
}
