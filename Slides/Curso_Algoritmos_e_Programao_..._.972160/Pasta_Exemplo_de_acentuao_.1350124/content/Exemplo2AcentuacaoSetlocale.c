#include <stdio.h>
#include <locale.h> //necess�rio para usar a fun��o setlocale

int main(void)
{
    printf("Verificando a localidade corrente:\n");
    printf("Localidade corrente: %s\n", setlocale(LC_ALL, NULL));
    printf("N�o � poss�vel usar acentua��o ou � corretamente.\n\n");

    printf("Alterando para a localidade do sistema:\n");
    //alterando para o padr�o do sistema operacional
    printf("Localidade corrente: %s\n",setlocale(LC_ALL, ""));
    printf("Agora n�o tem mais problema algum!\n");
    printf("J� posso usar acentua��o e tamb�m o caracter �.\n");

    return 0;
}
