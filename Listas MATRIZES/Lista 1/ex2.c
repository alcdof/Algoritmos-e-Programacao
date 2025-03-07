#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int i, j, matriz[5][5], vetL[5], vetC[5];

    srand(time(NULL));

    printf("\n=== MATRIZ ===\n");

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            matriz[i][j] = rand() % 6;
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    int soma;

    printf("\n=== SOMA DAS LINHAS ===\n");
    for(i=0; i<5; i++){
        soma = 0;
        for(j=0; j<5; j++){
            soma+=matriz[i][j];
        }
        vetL[i] = soma;
        printf("%d  ", vetL[i]);
    }

    printf("\n=== SOMA DAS COLUNAS ===\n");

    for(j=0; j<5; j++){
        soma = 0;
        for(i=0; i<5; i++){
            soma+=matriz[i][j];
        }
        vetC[i] = soma;
        printf("%d  ", vetC[i]);
    }

    return 0;
}