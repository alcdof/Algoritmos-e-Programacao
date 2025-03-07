#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int i, j, matriz[3][3], maior, linha, coluna;

    srand(time(NULL));

    printf("\n=== MATRIZ ===\n");

    maior = 0;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            matriz[i][j] = rand() % 101;
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                linha = (i+1);
                coluna = (j+1);
            }
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nO maior valor eh %d e esta na linha %d e na coluna %d.", maior, linha, coluna);

    return 0;
}