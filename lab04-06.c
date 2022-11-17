#include <stdio.h>

void main() {
    int soma = 0, c;
    float media;

    for (c = 1;c <= 10; c++) {
        int x;

        printf("Digite o valor %d: ", c);
        scanf("%d", &x);

        soma += x;
    }
    media = soma / 10.0;
    printf("A media desses numeros eh: %.2f", media);
}
