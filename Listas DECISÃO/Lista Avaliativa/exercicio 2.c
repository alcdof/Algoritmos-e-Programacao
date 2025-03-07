#include <stdio.h>

int main(void){

    int opcao, a, b, c;

    printf("Menu de opcoes: \n 1 - Mostra os numeros em ordem crescente \n 2 - Mostra os numeros em ordem decrescente \n 3 - Mostra os numeros que sao multiplos de 2 \n Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("Informe um valor: ");
        scanf("%d", &a);
        printf("Informe outro valor: ");
        scanf("%d", &b);
        printf("Informe outro valor: ");
        scanf("%d", &c);
        
        if(a<b && a<c){
            if(b<c){
                printf("Ordem crescente: %d %d %d", a, b, c);
                
            }
            else{
                printf("Ordem crescente: %d %d %d", a, c, b);

            }
        }
        else if(a>b && a<c){
            printf("Ordem crescente: %d %d %d", b, a, c);
        }
        else if(a<b && a>c){
            printf("Ordem crescente: %d %d %d", c, a, b);
            
        }
        else if(a>b && a>c){
            if(b<c){
                printf("Ordem crescente: %d %d %d", b, c, a);
            
            }   
            else{
                printf("Ordem crescente: %d %d %d", c, b, a);
                
            }
        }

        break;
    
    case 2: 
        printf("Informe um valor: ");
        scanf("%d", &a);
        printf("Informe outro valor: ");
        scanf("%d", &b);
        printf("Informe outro valor: ");
        scanf("%d", &c);
        
        if(a<b && a<c){
            if(b<c){
                printf("Ordem decrescente: %d %d %d", c, b, a);
            }
            else{
                printf("Ordem decrescente: %d %d %d", b, c, a);
            }
        }
        else if(a>b && a<c){
            printf("Ordem decrescente: %d %d %d", c, a, b);
        }
        else if(a<b && a>c){
            printf("Ordem decrescente: %d %d %d", b, a, c);
        }
        else if(a>b && a>c){
            if(b<c){
                printf("Ordem decrescente: %d %d %d", a, c, b);
            }   
            else{
                printf("Ordem decrescente: %d %d %d", a, b, c);
            }
        }

        break;

    case 3: 
        printf("Informe um valor: ");
        scanf("%d", &a);
        printf("Informe outro valor: ");
        scanf("%d", &b);
        printf("Informe outro valor: ");
        scanf("%d", &c);

        if(a % 2 == 0 && c % 2 == 0 && b % 2 != 0){
            printf("Apenas os numeros %d e %d sao multiplos de 2.", a, c);
        }
        else if(a % 2 == 0 && b % 2 != 0 && c % 2 != 0){
            printf("Apenas o numero %d eh multiplo de 2.", a);
        }
        else if(a % 2 == 0 && b % 2 == 0 && c % 2 != 0){
            printf("Apenas os numeros %d e %d sao multiplos de 2. ", a, b);
        }
        else if(a % 2 == 0 && b % 2 == 0 && c % 2 == 0){
            printf("Os numeros %d, %d e %d sao multiplos de 2. ", a, b, c);
        }
        else if(a % 2 != 0 && b % 2 != 0 && c % 2 != 0){
            printf("Nenhum numero eh multiplo de 2. ");
        }
        else if(a % 2 != 0 && b % 2 != 0 && c % 2 == 0){
            printf("Apenas o numero %d eh multiplo de 2. ", c);
        }
        else if(a % 2 != 0 && b % 2 == 0 && c % 2 != 0){
            printf("Apenas o numero %d eh multiplo de 2. ", b);
        }
        else if(a % 2 != 0 && b % 2 == 0 && c % 2 == 0){
            printf("Apenas os numeros %d e %d sao multiplos de 2. ", b, c);
        }
        break;

    default:
        printf("Opcao invalida! ");
        break;
    }

    return 0;
}