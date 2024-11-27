#include <stdio.h>

int main(void)
{
    int idade;

    printf("Informe a idade da pessoa: ");
    scanf("%d", &idade);

    if(idade < 0 || idade > 120)
    {
        printf("Idade invalida\n");
    }
    else if(idade >=0 && idade <= 12)
    {
        printf("A pessoa eh crianca\n");
    }
    else if(idade >= 13 && idade <= 18)
    {
        printf("A pessoa eh adolescente\n");
    }
    else if(idade >= 19 && idade <= 60)
    {
        printf("A pessoa eh adulto\n");
    }
    else if(idade >= 61 && idade <= 120)
    {
        printf("A pessoa eh idosa\n");
    }

    return 0;
}
