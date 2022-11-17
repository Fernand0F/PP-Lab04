#include <stdio.h>

void main() {
    float soma;
    int c;

    for (c = 1; c <= 10; c++) {
        float x;
        printf("Digite o valor %d: ", c);
        scanf("%f", &x);

        soma += x;
    }
    printf("%.2f", soma);
}
