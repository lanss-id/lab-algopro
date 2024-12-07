#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menu;
    start:
        system("clear");
        puts("1. Luas Persegi Panjang");
        puts("2. Luas Segitiga");
        puts("3. Luas Lingkaran");
        puts("4. Exit");

        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            system("clear");
            puts("Luas Persegi panjang");
            int panjang, lebar;
            printf("masukan panjang: ");
            scanf("%d", &panjang);
            printf("masukan lebar: ");
            scanf("%d", &lebar);
            printf("Luas Persegi Panjang adalah: %d\n", panjang * lebar);
            break;
        case 2:
            system("clear");
            puts("Luas Persegi panjang");
            float alas, tinggi;
            printf("masukan alas: ");
            scanf("%f", &alas);
            printf("masukan tinggi: ");
            scanf("%f", &tinggi);
            printf("Luas Persegi Panjang adalah: %.f\n", (alas * tinggi) / 2);
            break;
        case 3:
            system("clear");
            puts("Luas Lingkaran");
            double jari_jari;
            printf("masukan jari-jari: ");
            scanf("%f", &alas);
            printf("Luas Lingkaran: %.0f\n", 3.14 * jari_jari);
            break;
        case 4:
            system("clear");
            puts("Terima kasih...");
            break;
        default:
            system("clear");
            puts("invalid input");
            puts("Press enter to continue");
            getchar();
            getchar();
            goto start;
            break;
    }
}
