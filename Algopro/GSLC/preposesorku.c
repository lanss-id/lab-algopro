#include <stdio.h>
#include "dataku.c"
#define sum(x, y) (x + y)
#if (n % 2 == 0)
#define TIPE "Genap"
#else
#define TIPE "Ganjil"
#endif
int main()
{
    printf(TIPE);
    printf("\nTanggal hari ini %s", __DATE__);
    printf("\nPukul %s", __TIME__);
    printf("\nKode baris ke-%d", __LINE__);
    printf("\nPath file ini adalah %s", __FILE__);
    //----------------------
    system("pause");
    return 0;
}
