#include <stdio.h>

int main(void)
{
    int T, x, y, z;
    int bocilKematian;
    int punyaCoklat;
    long long int otwDiabet = 0;
    long long int otwDiabetTiapBocil = 0;
    long long int cokelat;

    scanf("%d", &T);
    for (x = 0; x < T; x++)
    {
        otwDiabet = 0;
        scanf("%d %d", &bocilKematian, &punyaCoklat);

        for (y = 1; y <= bocilKematian; y++)
        {
            otwDiabetTiapBocil = 0;

            for (z = 1; z <= punyaCoklat; z++)
            {
                scanf("%lld", &cokelat);

                if (cokelat > otwDiabetTiapBocil)
                {
                    otwDiabetTiapBocil = cokelat;
                }
            }
            otwDiabet += otwDiabetTiapBocil;
        }

        printf("Case #%d: %lld\n", x + 1, otwDiabet);
    }

    return 0;
}
