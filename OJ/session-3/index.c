#include <stdio.h>

int main() {

    // and operator
    (1 && 1) ? printf("true\n") : printf("false\n");
    (1 && 0) ? printf("true\n") : printf("false\n");
    (0 && 1) ? printf("true\n") : printf("false\n");
    (0 && 0) ? printf("true\n") : printf("false\n");

    printf("\n");

    // or operator
    (1 || 1) ? printf("true\n") : printf("false\n");
    (1 || 0) ? printf("true\n") : printf("false\n");
    (0 || 1) ? printf("true\n") : printf("false\n");
    (0 || 0) ? printf("true\n") : printf("false\n");

    printf("\n");

    // not operator
    (!1) ? printf("true\n") : printf("false\n");
    (!0) ? printf("true\n") : printf("false\n");

    //biner adalah angka yang hanya bisa dibaca oleh komputer   

    return 0;
}
