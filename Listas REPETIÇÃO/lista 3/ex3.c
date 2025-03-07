#include <stdio.h>

int main(void){

    int anos = 1;
    float soma1, soma2;
    soma1 = 1.50;
    soma2 = 1.10;

    while(soma1 > soma2){
        soma1+=0.02;
        soma2+=0.03;
        if(soma1 > soma2){
            anos++;
        }
    }
    printf("Altura final da arvore A: %.2f metros.\n", soma1);
    printf("Altura final da arvore B: %.2f metros.\n", soma2);
    printf("\nSerao necessarios %d anos para que a arvore B seja maior que a arvore A.", anos);

    return 0;
}