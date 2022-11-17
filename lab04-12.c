#include <stdio.h>

void main() {
    int n, s = 0, c, d;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for (c = 1; c != n; c++) {
        if ((n%c) == 0) {
            s += c;
        }
    }
    printf("A soma dos divisores de %d eh: %d", n, s);
}