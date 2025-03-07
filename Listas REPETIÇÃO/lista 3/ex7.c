#include <stdio.h>

int main(void){

    int i, base, expoente, resultado = 1;

    printf("Informe o valor da base: ");
    scanf("%d", &base);
    printf("Informe o valor do expoente: ");
    scanf("%d", &expoente);

    for(i = 1; i <= expoente; i++){
        resultado = resultado * base;
        if(i != expoente){
            printf("%d * ", base);
        }
        else{
            printf("%d = %d", base, resultado);
        }
    }

    return 0;
}