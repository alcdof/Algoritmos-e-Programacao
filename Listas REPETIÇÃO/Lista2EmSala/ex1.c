#include <stdio.h>
#include <math.h>

int main (void)
{
    float num, partedec;
    int parteint, partedecint, centena, dezena, unidade;

    printf("Informe um valor com seis digitos decimais: ");
    scanf("%f", &num);

    parteint = (int)num;
    partedec = num - parteint;
    partedecint = partedec * 1000;
    centena = parteint / 100;
    dezena = (parteint % 100)/10;
    unidade = (parteint % 100) % 10;

    printf("Numero informado: %f \n ", num);
    printf("Parte inteira: %d \n ", parteint);
    printf("Parte decimal: %f \n ", partedec);
    printf("Parte decimal como inteiro: %d \n ", partedecint);
    printf("Centena(s): %d \n ", centena);
    printf("Dezena(s): %d \n ", dezena);
    printf("Unidade(s): %d \n ", unidade);
    
    return 0;
}