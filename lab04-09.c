#include <stdio.h>

void main() {
    int n, c;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for (c = 0; c < 2*n; c++) {
        if ((c % 2) == 1) {
            printf("%d ", c);
        }
    }
}