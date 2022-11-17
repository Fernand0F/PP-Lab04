#include <stdio.h>
#include <math.h>

void main() {
    int x;

    while (1) {
        printf("Digite um valor inteiro [0 ou NEGATIVO para finalizar]: ");
        scanf("%d", &x);

        if (x <= 0) {
            break;
        }
        else {
            printf("O quadrado de %d eh.....: %d\n", x, x*x);
            printf("O cubo de %d eh.........: %d\n", x, x*x*x);
            printf("A raiz quadrada de %d eh: %.2f\n\n", x, sqrt(x));
        }
    }
}