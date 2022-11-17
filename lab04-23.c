#include <stdio.h>

void main() {
    int x, c, d, count = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &x);

    for (c = 1; c <= x; c++) {
        for (d = 1; d <= c; d ++) {
            printf("%3d ", count);
            count++;
        }
        printf("\n");
    }
}