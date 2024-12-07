#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, k;

    // masukin posisi awal dari lift ke1, 2, 3
    scanf("%d %d %d", &x, &y, &k);

    // Waktu (t) mulai dari 0 dan bakal terus diitung sampe kondisi terpenuhi atau tidak mungkin
    int t = 0;

    // Loop untuk cek setiap detik apakah ketiga lift ada dilantai yang sama
    while (t <= 10000) {  // 10000 ini batas maksimum iterasi untuk mencegah loop tak terbatas
        // Cek apakah semua lift dilantai yg sama
        if (x + t == y - t && x + t == k) {
            printf("%d\n", t);
            return 0;
        }

        // Jika lift kedua sudah mencapai lantai dasar, tidak gak akan ketemu lift pertama
        if (y - t < 0) break;

        t++;
    }

    // Jika ga ada waktu yg memenuhi, output -1
    printf("-1\n");

    // gokil gak brok?!!
    return 0;
}
