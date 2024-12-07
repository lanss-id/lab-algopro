#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calculate_age(int year, int current_year) {
    return current_year - year;
}

int main() {
    FILE *file;
    char filename[] = "umur siswa.txt";
    int hari, bulan, tahun;
    int current_year, age;
    int atas_51 = 0, antara_44_51 = 0, antara_36_43 = 0;
    int antara_28_35 = 0, bawah_28 = 0;

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    current_year = tm.tm_year + 1900;

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(file, "%d/%d/%d", &hari, &bulan, &tahun) == 3) {
        if (tahun <= 99) {
            tahun += (tahun < 50) ? 2000 : 1900;
        }
        age = calculate_age(tahun, current_year);
        if (age >= 52) {
            atas_51++;
        } else if (age >= 44 && age <= 51) {
            antara_44_51++;
        } else if (age >= 36 && age <= 43) {
            antara_36_43++;
        } else if (age >= 28 && age <= 35) {
            antara_28_35++;
        } else if (age <= 27) {
            bawah_28++;
        }
    }

    fclose(file);

    printf("Kelompok Umur:\n");
    printf("Diatas 51: %d\n", atas_51);
    printf("Diantara 44 - 51: %d\n", antara_44_51);
    printf("Diantara 36 - 43: %d\n", antara_36_43);
    printf("Diantara 28 - 35: %d\n", antara_28_35);
    printf("Dibawah 28: %d\n", bawah_28);

    return 0;
}
