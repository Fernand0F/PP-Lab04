#include <stdio.h>

void main() {
    int a = 0;
    float c = 1.50, z = 1.10;

    while (z <= c) {
        c += 0.02;
        z += 0.03;
        a += 1;
    }

    printf("Para que Ze seja maior que Chico serao necessarios %d anos", a);
}