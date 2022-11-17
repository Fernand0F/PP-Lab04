#include <stdio.h>

void main() {
   int c;
   float salario = 2000 * 1.015, aumento = 2 * (2000 * 0.015);

   for (c = 1997; c <= 2022; c++) {
        salario += aumento;
        aumento *= 2;
   }

   printf("Salario atual do funcionario: %.2f", salario);
}