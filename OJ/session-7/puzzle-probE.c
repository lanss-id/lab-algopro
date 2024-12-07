#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int matrix[100][100];
    int isValid = 1;  // 1 = valid (Yay), 0 = invalid (Nay)

    // Read matrix
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check rows
    for(int i = 0; i < N && isValid; i++) {
        int used[101] = {0};  // Used numbers in current row
        for(int j = 0; j < N; j++) {
            if(used[matrix[i][j]]) {
                isValid = 0;
                break;
            }
            used[matrix[i][j]] = 1;
        }
    }

    // Check columns only if rows were valid
    if(isValid) {
        for(int j = 0; j < N && isValid; j++) {
            int used[101] = {0};  // Used numbers in current column
            for(int i = 0; i < N; i++) {
                if(used[matrix[i][j]]) {
                    isValid = 0;
                    break;
                }
                used[matrix[i][j]] = 1;
            }
        }
    }

    printf("%s\n", isValid ? "Yay" : "Nay");

    return 0;
}
