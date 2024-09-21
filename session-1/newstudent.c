#include <stdio.h>

int main() {
    char nama[100];
    char nis[10];
    int age;
    scanf("%[^\n]", nama);
    scanf("%s %d", nis, &age);
    printf("Name: %s\n", nama);
    printf("NIS: %s\n", nis);
    printf("Age: %d\n", age);

    return 0;
}
