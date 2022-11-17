#include <stdio.h>

void main() {
    int c;
    float temp, menor, maior;

    printf("Digite um valor: ");
    scanf("%f", &temp);

    menor = temp;
    maior = temp;

    for (c = 0; c < 9; c++) {
        printf("Digite um valor: ");
        scanf("%f", &temp);

        if (temp < menor) {
            menor = temp;
        }

        if (temp > maior) {
            maior = temp;
        }
    }
    printf("\nMenor numero digitado: %.2f\n", menor);
    printf("Maior numero digitado: %.2f", maior);
}