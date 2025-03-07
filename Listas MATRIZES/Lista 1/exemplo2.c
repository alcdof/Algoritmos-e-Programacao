#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes.h"


int main(void){
    int lim, lin, col;

    printf("Type the number of lines: ");
    scanf("%d", &lin);
    printf("Type the number of columns: ");
    scanf("%d", &col);
    printf("Type a limit for the generation of numbers:");
    scanf("%d", &lim);

   int *matrix = (int *)malloc(lin * col * sizeof(int));

    createMatrixFrom0ToLimit(lin, col, matrix, lim);

    printf("\n=== MATRIX ===\n");
    showMatrixInteger(lin, col, matrix);

    return 0;
}