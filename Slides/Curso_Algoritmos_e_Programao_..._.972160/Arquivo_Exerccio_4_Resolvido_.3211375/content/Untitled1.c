/*4) Fazer um programa que faça o levantamento dos
candidatos que se inscreveram para vagas em uma
empresa. Considerando que para cada candidato, a
empresa tenha obtido as seguintes informações:
- Idade
- Nacionalidade (B - Brasileiro ou E - Estrangeiro)
- Possui curso superior (S - Sim ou N - Não)
Determinar:
a) A quantidade de brasileiros.
b) A quantidade de estrangeiros.
c) A idade média dos brasileiros sem curso superior.
d) A menor idade entre os estrangeiros com curso superior.
Estabelecer uma condição para finalizar a entrada de dados do programa. Por exemplo, igual a 0 ou idade
negativa. Se a idade for igual a 0 ou negativa, não ler as informações de nacionalidade e se possui curso
superior, e sair do programa.*/

#include <stdio.h>

int main(void)
{
    int idade=1, contBras=0, contEstr=0, contBSCS=0, somaBSCS=0;
    int primeiro=0, menorIdade=0;
    char nacio, curso;
    float media;

    while(idade>0)
    {
        printf("Informe a idade: ");
        scanf("%d", &idade);

        if(idade>0)
        {
            //Valida a nacionalidade
            do
            {
                printf("Informe a nacionalidade (B/b/E/e): ");
                fflush(stdin);
                scanf("%c", &nacio);

                if(nacio!='B' && nacio!='b' && nacio!='E' && nacio!='e')
                {
                    printf("Nacionalidade invalida\n");
                }
            }while(nacio!='B' && nacio!='b' && nacio!='E' && nacio!='e');

            //Valida o curso
            do
            {
                printf("Informe se tem curso superior (S/s/N/n): ");
                fflush(stdin);
                scanf("%c", &curso);

                if(curso!='N' && curso!='n' && curso!='S' && curso!='s')
                {
                    printf("Curso invalido\n");
                }
            }while(curso!='N' && curso!='n' && curso!='S' && curso!='s');

            if(nacio == 'B' || nacio == 'b')
            {
                contBras++;

                if(curso == 'N' || curso == 'n')
                {
                    contBSCS++;
                    somaBSCS = somaBSCS + idade;
                }
            }
            else
            {
                contEstr++;

                if(curso=='S' || curso == 's')
                {
                    if(primeiro==0)
                    {
                        menorIdade = idade;
                        primeiro = 1;
                    }
                    else
                    {
                        if(idade < menorIdade)
                        {
                            menorIdade = idade;
                        }
                    }
                }
            }
        }
    }

    printf("\nQuantidade de brasileiros: %d\n", contBras);
    printf("Quantidade de estrangeiros: %d\n", contEstr);

    if(contBSCS>0)
    {
        media = (float)somaBSCS/contBSCS;
        printf("Media de brasileiros sem curso superior: %.2f\n", media);
    }
    else
    {
        printf("Nao existe nenhum brasileiro sem curso superior cadastrado\n");
    }

    printf("A menor idade de estrangeiro com curso superior eh: %d\n", menorIdade);

    return 0;
}
