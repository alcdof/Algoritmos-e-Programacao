#include <stdio.h>
#include <math.h>

int main(void)
{
    float custo, convite, numcon, numcon2;
    printf("Informe o valor de custo do espetaculo: R$ ");
    scanf("%f", &custo);
    printf("Informe o valor do convite: R$ ");
    scanf("%f", &convite);

    numcon = (ceil(custo / convite));
    numcon2 = ceil((custo + (custo * 0.25)) / convite);

    printf("Para cobrir o custo do espetaculo eh necessario vender %.0f ingressos.\n", (ceil(numcon)));
    printf("Para cobrir o custo do espetaculo e ter lucro de 25%% eh necessario vender %.0f ingressos. ", (ceil(numcon2)));

    return 0;
}