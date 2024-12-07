#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_PEMAIN 10

int main() {
    int jumlah_pemain, giliran = 0;
    int batas_bawah = 1; 
    int batas_atas = 100;
    int ANGKA_BOM; 

    
    srand(time(NULL));
    ANGKA_BOM = (rand() % 100) + 1;
    // ANGKA_BOM = 11;

    
    printf("Masukkan jumlah pemain (1 - %d): ", MAX_PEMAIN);
    scanf("%d", &jumlah_pemain);

    
    if (jumlah_pemain < 1 || jumlah_pemain > MAX_PEMAIN) {
        printf("Jumlah pemain tidak valid!\n");
        return 1;
    }

    
    while (1) {
        printf("\nGiliran Pemain %d\n", (giliran % jumlah_pemain) + 1);
        int angka;

        
        if (batas_bawah == batas_atas) {
            printf("Rentang hanya memiliki satu angka (%d). Pemain %d harus menebak angka ini. Game Over!\n", batas_bawah, (giliran % jumlah_pemain) + 1);
            break; 
        }

        printf("Masukkan angka (%d - %d): ", batas_bawah, batas_atas);
        scanf("%d", &angka);

        
        if (angka < batas_bawah || angka > batas_atas) {
            printf("Angka tidak valid! Harus dalam rentang %d - %d.\n", batas_bawah, batas_atas);
            continue; 
        }

        
        if (angka == ANGKA_BOM) {
            printf("Pemain %d menebak angka bom! Game Over!\n", (giliran % jumlah_pemain) + 1);
            break; 
        }
        
        if (batas_bawah == ANGKA_BOM && batas_bawah == ANGKA_BOM) { 
            if(jumlah_pemain > 1) {
                printf("\nPemain %d kalah\n", giliran);
                break;
            }
            printf("\nPemain %d, anda menang!\n", giliran);
            break;
        }
        
        
        if (angka < ANGKA_BOM) {
            batas_bawah = angka + 1;
        } else {
            batas_atas = angka - 1; 
        }

        
        printf("Rentang baru: %d - %d\n", batas_bawah, batas_atas);
        
        giliran++;
    }

    printf("Game Over!\n\n");
    
    printf("Pemain yang menang, ambil hadiah di Edu\n");
    return 0;
}

