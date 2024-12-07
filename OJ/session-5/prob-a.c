#include <stdio.h>
    
int main()
{
    int T;
    scanf("%d", &T);

    int segi3[T];

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &segi3[i]);
    }

    for (int i = 0; i < T; i++)
    {
        printf("Case #%d:\n", i + 1);

        for (int x = 0; x < segi3[i]; x++)
        {
            int init = 0;
            for (int j = segi3[i] - x - 1; j > 0; j--)
            {
                printf(" ");
                init += 1;
            }

            for (int j = 0; j <= x; j++)
            {
                if ((x + init) % 2 == 0)
                {
                    printf("*");
                    init += 1;
                }
                else
                {
                    printf("#");
                    init += 1;
                }
            }
            printf("\n");
        }
    }
}
