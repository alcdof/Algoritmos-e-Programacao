#include <stdio.h>

int main(void){

    int bem, dor, temp;
    printf("O paciente se sente bem? (1 para sim, 0 para nao) ");
    scanf("%d", &bem);
    if(bem == 1){
        printf("O paciente esta saudavel. ");
    }
    else if(bem == 0){
        printf("O paciente tem dor? (1 para sim, 0 para nao) ");
        scanf("%d", &dor);
        if(dor == 1){
            printf("O paciente esta doente. ");
        }
        else if(dor == 0){
            printf("Qual eh a temperatura do paciente? ");
            scanf("%d", &temp);
            if(temp>37){
                printf("O paciente esta doente. ");
            }
            else if(temp<=37 && temp>=0){
                printf("O paciente esta saudavel. ");
            }
        }
        else{
            printf("Valores invalidos. Tente novamente. ");
        }
    }
    else{
        printf("Valores invalidos. Tente novamente.");
    }





    return 0;
}