#include <stdio.h>

void main() {
    int n, c;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for (c = 0; c <= n; c++) {
        printf("%d\n", c);
    }
}