#include <stdio.h>

int main(void){
    float matriz[3][2], soma = 0, media = 0, vetor[3];
    int i, j, k;

    for(i=0; i<3; i++){
        k = 0;
        for(j=0; j<2; j++){
            printf("Informe a nota %d do aluno %d: ", k, (i+1));
            scanf("%f", &matriz[i][j]);
            k++;
        }
    }

    printf("=== MATRIZ NOTAS ===\n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("%.2f ", matriz[i][j]);
            soma+=matriz[i][j];
            media = soma/2;
            vetor[i] = media;
        }
        printf("\n");
        media = 0;
        soma = 0;
    }

    printf("=== VETOR MEDIAS ===\n");
    for(i = 0; i < 3; i++){
        printf("%.2f  ", vetor[i]);
    }

    return 0;
}