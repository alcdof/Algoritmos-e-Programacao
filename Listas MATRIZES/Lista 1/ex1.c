#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrizes.h"


int main(void){
    int i, j, lim, lin, col;

    printf("Informe o numero de linhas: ");
    scanf("%d", &lin);
    printf("Informe o numero de colunas: ");
    scanf("%d", &col);
    printf("Informe o limite para valores serem gerados:");
    scanf("%d", &lim);

   int *matriz = (int *)malloc(lin * col * sizeof(int));

    gerarMatrizDe0ALimite(lin, col, matriz, lim);

    printf("\n=== MATRIX ===\n");
    mostrarMatrizInteira(lin, col, matriz);
    
    int soma1 = 0, soma2 = 0, soma3 = 0;
    
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            soma3+=*(matriz + i * col + j);

            if(i == j){
                soma2+=*(matriz + i * col + j);
            }
            if(i + j == col - 1){
                soma1+=*(matriz + i * col + j);
            }
        }
        printf("\n");
    }
    printf("Soma da diagonal secundaria: %d", soma1);
    printf("\nSoma da diagonal principal: %d", soma2);
    printf("\nSoma total da matriz: %d", soma3);

    return 0;
}