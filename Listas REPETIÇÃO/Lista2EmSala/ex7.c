#include <stdio.h>
#include <math.h>

int main(void)
{
    float salario, aumento, desconto, salarioaumentado, salariodescontado, salarioliq, reais, centavos;

    printf("Informe o valor do salario: R$ ");
    scanf("%f", &salario);
    printf("Informe o percentual de aumento (10 para 10%%): ");
    scanf("%f", &aumento);
    printf("Informe o percentual de desconto: (10 para 10%%):");
    scanf("%f", &desconto);

    salarioaumentado = salario + (salario * (aumento/100));
    salariodescontado = salarioaumentado - (salarioaumentado * (desconto/100));
    salarioliq = salarioaumentado - (salarioaumentado - salariodescontado);
    reais = trunc(salarioliq);
    centavos = (salarioliq - reais) * 100;

    printf("Salario aumentado: R$ %.2f \n ", salarioaumentado);
    printf("Salario liquido: R$ %.2f \n ", salarioliq);
    printf("O salario liquido eh: R$ %.0f reais e %.0f centavos. \n ", salarioliq, centavos);

    return 0;
}