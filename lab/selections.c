#include <stdio.h>

int main()
{
    // int a = 5;
    // int b = 10;

    // (a == b) ? printf("true\n") : printf("false\n");

    int n;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("i'm a number zero\n");
    }
    else if (n == 1)
    {
        printf("i'm a number one\n");
    }
    else if (n == 2)
    {
        printf("i'm a number two\n");
    }
    else
    {
        printf("i'm not zero, one or two\n");
    }

    switch (n)
    {
    case 0:
        printf("im a number zero");
        break;
    case 1:
        printf("im a number one");
        break;
    case 2:
        printf("im a number two");
        break;
    default:
        break;
    }
}
