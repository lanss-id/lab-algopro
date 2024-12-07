#include <stdio.h>

int jobonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 1;
    }

    return jobonacci(n - 1) + jobonacci(n - 3);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", jobonacci(n));
    return 0;
}
