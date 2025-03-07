#include <stdio.h>

int verificaRetangular(int num) {
    int i = 2, soma = 0;

    while (soma < num) {
        soma += i;  
        if (soma == num) {
            printf("%d eh retangular ==> ", num);
            int j, primeiro = 1;
            for (j = 2; j <= i; j += 2) {
                if (!primeiro) {
                    printf("+ ");
                }
                printf("%d ", j);
                primeiro = 0;
            }
            printf("= %d\n", num);
            return 1;
        }
        i += 2;
    }
    return 0;
}

int main(void){
    int op, num, limInf, limSup;
    char repetir;

    do{

        printf("1 - Verifica se um numero eh retangular\n");
        printf("2 - Mostra os numeros retangulares em um intervalo\n");
        scanf("%d", &op);

        switch (op){
            case 1:
                printf("Informe um numero: ");
                scanf("%d", &num);
                verificaRetangular(num);        

                break;
        
            case 2:
                printf("Informe o limite inferior: ");
                scanf("%d", &limInf);
                printf("Informe o limite superior: ");
                scanf("%d", &limSup);

                for(int i=limInf;i<=limSup;i++){
                    verificaRetangular(i);
                }

                break;

            default:
                printf("Opcao nao disponivel.\n");
                break;
        }

        printf("Deseja repetir o programa (S/s)? ");
        fflush(stdin);
        scanf("%c", &repetir);

    }while(repetir == 'S' || repetir == 's');

    return 0;
}