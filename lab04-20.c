#include <stdio.h>

void main() {
    int c, d, soma = 0, verificador;

    for (c = 1; c < 2000000; c++) {
        verificador = 0;

        for (d = 2; d < c / 2; d++) {
            if ((c % d) == 0) {
                verificador = 1;
                break;
            }
        }

        if (verificador == 0) {
            soma += c;
        }
    }

    printf("A soma de todos os numeros primos abaixo de 2000000 eh: %d", soma);
}