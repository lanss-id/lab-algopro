#include <stdio.h>
#include <string.h>

void backSortStrings(char arr[][11], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int len1 = strlen(arr[j]);
            int len2 = strlen(arr[j + 1]);
            int minLen = (len1 < len2) ? len1 : len2;

            int compareResult = 0;
            for (int k = 1; k <= minLen; k++) {
                if (arr[j][len1 - k] != arr[j + 1][len2 - k]) {
                    compareResult = arr[j][len1 - k] - arr[j + 1][len2 - k];
                    break;
                }
            }

            if (compareResult > 0 ||
                (compareResult == 0 && len1 > len2)) {
                char temp[11];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int testCase = 1; testCase <= T; testCase++) {
        int N;
        scanf("%d", &N);

        char strings[10][11];
        for (int i = 0; i < N; i++) {
            scanf("%s", strings[i]);
        }

        backSortStrings(strings, N);

        printf("Case #%d:\n", testCase);
        for (int i = 0; i < N; i++) {
            printf("%s\n", strings[i]);
        }
    }

    return 0;
}
