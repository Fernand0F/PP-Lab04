#include <stdio.h>

void main() {
    int soma = 0, c;
    float media, a = 0;

    printf("Digite numeros inteiros, negativos ou positivos\n");

    for (c = 1;c <= 10; c++) {
        int x;

        while (1) {

            printf("Digite o valor %d: ", c);
            scanf("%d", &x);

            if ((x % 2) == 1) {
                printf("Numero Impar! Invalido!\n\n");
            }
            else {
                break;
            }
        }

        if (x >= 0) {
            soma += x;
            a += 1;
        }
    }
    media = soma / a;
    printf("A media dos numeros positivos eh: %.2f", media);
}
