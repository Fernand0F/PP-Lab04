#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    char comp;
    int x, c, n1, n2;

    srand(time(NULL));

    printf("Quantas vezes os dados devem ser lancados? ");
    scanf("%d", &x);

    for (c = 0; c < x; c++) {
        
        n1 = (rand() % 6) + 1;
        n2 = (rand() % 6) + 1;

        if (n1 == n2) {
            comp = '=';
        }
        else if (n1 < n2) {
            comp = '<';
        }
        else {
            comp = '>';
        }

        printf("%d %c %d\n", n1, comp, n2);

        
    }
}