#include <stdio.h>
#include <string.h>

int main() {
    int testCases;
    scanf("%d", &testCases);

    for (int caseNum = 1; caseNum <= testCases; caseNum++) {
        int length;
        unsigned long long shift;
        char input[101];

        scanf("%d %llu", &length, &shift);
        scanf("%s", input);

        printf("Case #%d: ", caseNum);
        for (int i = 0; i < length; i++) {
            int shiftedChar = (input[i] - 'a' + shift) % 26;
            printf("%c", shiftedChar + 'a');
        }
        printf("\n");
    }

    return 0;
}
