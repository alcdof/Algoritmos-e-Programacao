#include <stdio.h>
#include <math.h>

int main(void)
{
    float salario, centavos;
    int reais;

    printf("Informe o valor do salario: R$ ");
    scanf("%f", &salario);

    reais = trunc(salario);
    centavos = (salario - reais) * 100;

    printf("Salario informado: R$ %.2f \n ", salario);
    printf("Reais: %d \n ", reais);
    printf("Centavos: %.0f \n ", centavos);

    return 0;
}