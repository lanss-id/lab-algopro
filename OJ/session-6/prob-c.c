#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        char S[100001];
        int freq[26] = {0}, distinctCount = 0;

        scanf("%s", S);
        int length = strlen(S);

        for (int j = 0; j < length; j++) {
            if (freq[S[j] - 'a'] == 0) {
                freq[S[j] - 'a'] = 1;
                distinctCount++;
            }
        }

        if (distinctCount % 2 == 0) {
            printf("Case #%d: Yay\n", i);
        } else {
            printf("Case #%d: Ewwww\n", i);
        }
    }

    return 0;
}
