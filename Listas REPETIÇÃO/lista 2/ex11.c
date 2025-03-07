#include <stdio.h>

int main(void){

    int n;
    float soma = 0;

    do{
        printf("Informe um numero: ");
        scanf("%d", &n);
    }while(n<=0);

    for(int i=1; i<=n; i++){
        soma = soma + 1/(float)i;
    }
    
    for(int i=1; i<=n; i++){
        if(i==n){
            printf("1/%d ", i);
        }
        else{
            printf("1/%d + ", i);
        }
    }
    printf("= %.2f", soma);

    return 0;
}
