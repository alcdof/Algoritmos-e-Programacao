#include <stdio.h>

int main(void){

    int i, num, cont = 0;

    printf("Quantos numeros pares quer mostrar? ");
    scanf("%d", &num);

    for(i=0; i<=(num * 2)-2; i++){
        if(i % 2 == 0){
            cont++;
            if(cont % 5 == 0){
                printf("%d\n", i);
            }
            else{
                printf("\t%d\t", i);
            }            
        }
        
    }

    return 0;
}