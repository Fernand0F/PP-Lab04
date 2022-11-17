#include <stdio.h>

void main() {
    int x=0;

    while (x <= 100000) {
        printf("%d\n", x);

        x += 1000;
    }
}
