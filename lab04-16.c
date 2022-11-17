#include <stdio.h>

void main() {
    int cmd;
    float n1, n2;

    while (1) {
        printf("------- MENU -------\n");
        printf("[ 1 ] Adicao\n");
        printf("[ 2 ] Subtracao\n");
        printf("[ 3 ] Multiplicacao\n");
        printf("[ 4 ] Divisao\n");
        printf("[ 5 ] Finalizar\n");
        printf("--------------------\n");

        printf("Opcao: ");
        scanf("%d", &cmd);

        if (cmd == 5) {
            break;
        }

        if ((cmd >= 1)&&(cmd <=4)) {
            printf("\nPrimeiro valor: ");
            scanf("%f", &n1);
            printf("Segundo valor: ");
            scanf("%f", &n2);

            printf("\n");

            switch (cmd) {
                case 1:
                    printf("%.2f + %.2f = %.2f", n1, n2, n1+n2); break;
                case 2:
                    printf("%.2f - %.2f = %.2f", n1, n2, n1-n2); break;
                case 3:
                printf("%.2f x %.2f = %.2f", n1, n2, n1*n2); break;
                case 4:
                    if (n2 != 0) {
                        printf("%.2f / %.2f = %.2f", n1, n2, n1/n2); break;
                    }
                    else {
                        printf("ERRO! DIVISAO POR 0!");
                    }
            }
        }
        else {
            printf("Valor fora dos parametros");
        }
        printf("\n\n");
    }
}