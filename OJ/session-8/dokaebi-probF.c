#include <stdio.h>

void tukarNilai(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int bandingkanArray(int a[], int b[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            return a[i] - b[i];
        }
    }
    return 0;
}

void cetakArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

void hasilkanPermutasiRekursif(int arr[], int start, int n, int permutations[][10], int *count) {
    if (start == n - 1) {
        for (int i = 0; i < n; i++) {
            permutations[*count][i] = arr[i];
        }
        (*count)++;
        return;
    }

    for (int i = start; i < n; i++) {
        tukarNilai(&arr[start], &arr[i]);
        hasilkanPermutasiRekursif(arr, start + 1, n, permutations, count);
        tukarNilai(&arr[start], &arr[i]);
    }
}

void urutkanPermutasi(int permutations[][10], int count, int n) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (bandingkanArray(permutations[j], permutations[j+1], n) > 0) {
                int temp[10];
                for (int k = 0; k < n; k++) {
                    temp[k] = permutations[j][k];
                    permutations[j][k] = permutations[j+1][k];
                    permutations[j+1][k] = temp[k];
                }
            }
        }
    }
}

void prosesPermutasi(int arr[], int n) {
    int permutations[720][10];
    int count = 0;

    hasilkanPermutasiRekursif(arr, 0, n, permutations, &count);
    urutkanPermutasi(permutations, count, n);

    for (int i = 0; i < count; i++) {
        cetakArray(permutations[i], n);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[10];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    prosesPermutasi(arr, n);
    return 0;
}
