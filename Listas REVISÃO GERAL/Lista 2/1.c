#include <stdio.h>


int VerificaTriangular(int num){
    int i=1, prod=1, resultado = 0;
    
    while(prod < num){
        prod = i * (i+1) * (i+2);
        if(prod == num){
            
            printf("%d eh triangular ==> %d * %d * %d = %d\n", num, i, i + 1, i + 2, num);
            resultado = 1;
        }
        i++;
    }
   
    return resultado;
}

int main(void){
    int num, op, limInf, limSup;
    char repetir;

    do{
        printf("1 - Verifica se um numero eh triangular\n");
        printf("2 - Verifica todos os numeros triangulares em um intervalo\n");
        printf("Opcao: ");
        scanf("%d", &op);
        
        switch (op){
            case 1:
                
                printf("Informe um numero: ");
                scanf("%d", &num);

                
                
                if(VerificaTriangular(num) == 0){
                    printf("%d nao eh triangular.\n", num);
                }
                
                break;
            
            case 2:

                printf("Informe o limite inferior do intervalo: ");
                scanf("%d", &limInf);
                
                printf("Informe o limite superior do intervalo: ");
                scanf("%d", &limSup);
                
                int j;
                
                for(j=limInf; j<=limSup; j++){
                    VerificaTriangular(j);
                }
                break;

            default:
                break;
        }
        
        printf("Deseja repetir o programa (S/s)? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir == 's' || repetir == 'S');

    return 0;
}