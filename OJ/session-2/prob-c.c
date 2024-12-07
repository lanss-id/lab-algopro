#include <stdio.h>

int main()
{
    int P, M, PD;
    scanf("%d %d %d", &P, &M, &PD);

    double total_damage = (0.2 * P) + (0.3 * M) + (0.5 * PD);

    printf("%.2f\n", total_damage);

    return 0;
}
