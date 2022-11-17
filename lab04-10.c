#include <stdio.h>

void main() {
    int c, soma = 0;

    for (c = 1; c <= 100; c++) {
        if ((c%2)==0) {
            soma += c;
        }
    }
    printf("A soma dos primeiros 50 numeros pares eh: %d", soma);
}
