#include <stdio.h>
#include <string.h>

int main() {
    int totalCases;
    char words[100][1000];

    scanf("%d", &totalCases);

    for (int i = 0; i < totalCases; i++) {
        scanf("%s", words[i]);
    }

    for (int i = 0; i < totalCases; i++) {
        int length = strlen(words[i]);
        int isPalindrome = 1;

        for (int j = 0; j < length / 2; j++) {
            if (words[i][j] != words[i][length - j - 1]) {
                isPalindrome = 0;
                break;
            }
        }

        printf("Case #%d: %s\n", i + 1, isPalindrome ? "yes" : "no");
    }

    return 0;
}
