#include <stdio.h>

void main() {
    int c;

    for (c = 1; c < 101; c++) {
        printf("%d\n", c);
    }

    printf("\n");

    c = 1;

    while (c != 101) {
        printf("%d\n", c);

        c++;
    }

    printf("\n");

    c = 1;

    do {
        printf("%d\n", c);

        c++;
    } while (c != 101);
}
