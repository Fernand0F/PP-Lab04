#include <stdio.h>

void main() {
    int c, s = 0;

    for (c = 1; c < 1000; c++) {
        if (((c % 3) == 0)||((c % 5) == 0)) {
            s += c;
        }
    }
    printf("A soma de todos os numeros naturais abaixo de 1000 que sao multiplos de 3 ou 5 eh: %d", s);
}