#include <stdio.h>
#include <string.h>

int main() {
    char courseCode[5][11];
    int startHour[5], startMinute[5], endHour[5], endMinute[5];

    for (int i = 0; i < 5; i++) {
        scanf("%s %d:%d-%d:%d", courseCode[i], &startHour[i], &startMinute[i], &endHour[i], &endMinute[i]);
        startHour[i]--;
        endHour[i]--;
    }

    for (int i = 0; i < 5; i++) {
        printf("%s %02d:%02d-%02d:%02d\n", courseCode[i], startHour[i], startMinute[i], endHour[i], endMinute[i]);
    }

    return 0;
}
