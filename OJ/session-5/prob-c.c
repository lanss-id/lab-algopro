#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        char word[1001];
        scanf("%s", word);

        printf("Case #%d : ", i);
        for (int j = strlen(word) - 1; j >= 0; j--) {
            printf("%c", word[j]);
        }
        printf("\n");
    }
    return 0;
}
