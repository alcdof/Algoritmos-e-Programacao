#include <stdio.h>

int main(void){

    float salariomin, salariobru, salarioliq, inss;

    printf("Informe o salario minimo: ");
    scanf("%f", &salariomin);
    printf("Informe o salario bruto: ");
    scanf("%f", &salariobru);

    if(salariobru <= (3 * salariomin)){
        inss = 0.08 * salariobru;
        salarioliq = salariobru - inss;
        printf("Desconto do INSS: R$ %.2f\n", inss);
        printf("Salario liquido: R$ %.2f", salarioliq);
    }
    else if(salariobru > (3 * salariomin)){
        inss = 0.10 * salariobru;
        if(inss > salariomin){
            inss = salariomin;
            salarioliq = salariobru - inss;
            printf("Desconto do INSS: R$ %.2f\n", inss);
            printf("Salario liquido: R$ %.2f", salarioliq);
        }
    }
    
    return 0;
}