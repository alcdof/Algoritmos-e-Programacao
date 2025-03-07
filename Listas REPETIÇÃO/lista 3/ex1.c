#include <stdio.h>

int main(void){

    int i, ant1, ant2, atual, num;
    ant1 = 1;
    ant2 = 0;

    printf("Quantos termos mostrar? ");
    scanf("%d", &num);
    
    printf("1\t1\t");

    for(i=1; i<num; i++){
        atual = ant1 + ant2;
        ant1 = atual;
        ant2 = atual - ant2;
        printf("%d\t", ant1 + ant2);
    }

    return 0;
}