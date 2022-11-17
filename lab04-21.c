#include <stdio.h>

void main() {
    int a, b, c, d, verificador, contador = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &b);

    for (c = a + 1; c < b; c++) {
        verificador = 0;

        for (d = 2; d < c; d++) {
            if ((c % d) == 0) {
                verificador = 1;
            }
        }

        if (verificador == 0) {
            contador += 1;
        }
    }

    printf("Entre %d e %d existem %d numeros primos", a, b, contador);
}