#include <stdio.h>

int main(void){

    float salario = 0, aumento, novosal;
    int cargo;

    printf("Informe seu salario: ");
    scanf("%f", &salario);
    printf("Informe seu cargo: ");
    scanf("%d", &cargo);

    switch (cargo)
    {
    case 1:
        aumento = 0.5 * salario;
        novosal = salario + aumento;
        printf("O cargo eh escrituario.\n O valor do aumento salarial eh R$ %.2f.\n O novo salario eh R$ %.2f.", aumento, novosal);
        break;

    case 2:
        aumento = 0.35 * salario;
        novosal = salario + aumento;
        printf("O cargo eh secretario.\n O valor do aumento salarial eh R$ %.2f.\n O novo salario eh R$ %.2f.", aumento, novosal);
        break;

    case 3:
        aumento = 0.2 * salario;
        novosal = salario + aumento;
        printf("O cargo eh caixa.\n O valor do aumento salarial eh R$ %.2f.\n O novo salario eh R$ %.2f.", aumento, novosal);
        break;

    case 4:
        aumento = 0.1 * salario;
        novosal = salario + aumento;
        printf("O cargo eh gerente.\n O valor do aumento salarial eh R$ %.2f.\n O novo salario eh R$ %.2f.", aumento, novosal);
        break;

    case 5:
        aumento = 0.0 * salario;
        novosal = salario + aumento;
        printf("O cargo eh diretor.\n O valor do aumento salarial eh R$ %.2f.\n O novo salario eh R$ %.2f.", aumento, novosal);
        break;

    default:
        printf("Cargo inexistente. ");
        break;
    }

    return 0;
}