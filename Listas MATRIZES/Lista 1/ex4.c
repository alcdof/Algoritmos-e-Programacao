#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calculaPotencia(int num, int exp){
    int i, prod;
    prod = 1;

    for(i=0; i<exp; i++){
        prod*=num;
    }

    return prod;    
}

int main(void){
    int i, j, matriz[10][2], vet[10];

    srand(time(NULL));

    printf("\n=== MATRIZ ===\n");

    for(i=0; i<10; i++){
        for(j=0; j<2; j++){
            matriz[i][j] = rand() % 7;
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n=== CALCULO DA POTENCIA ===\n");
    printf("BASE\tEXPOENTE\tRESULTADO\n");

    for(i=0; i<10; i++){
        for(j=0; j<2; j++){
            printf("%d\t", matriz[i][j]);
        }
        vet[i] = calculaPotencia(matriz[i][0], matriz[i][1]);
        printf("\t%d", vet[i]);
        printf("\n");
    }

    return 0;
}