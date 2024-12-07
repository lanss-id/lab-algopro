#include <stdio.h>

int main()
{
    float ipk;
    scanf("%f", &ipk);

    if (ipk >= 3.5 && ipk <= 4.0)
    {
        printf("Cumlaude\n");
    }
    else if (ipk >= 3.0 && ipk <= 3.4)
    {
        printf("Outstanding\n");
    }
    else if (ipk >= 2.5 && ipk <= 3.4)
    {
        printf("Very Good\n");
    }
    else if (ipk >= 2.0 && ipk <= 2.4)
    {
        printf("Good\n");
    }
    else if (ipk < 2.0)
    {
        printf("Poor\n");
    }
}
