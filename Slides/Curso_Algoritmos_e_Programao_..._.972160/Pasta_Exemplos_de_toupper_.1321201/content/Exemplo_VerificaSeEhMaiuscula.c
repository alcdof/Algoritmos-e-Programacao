#include <stdio.h>

int main(void)
{
    char ch;

    printf("Digite um caractere: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Caractere eh uma letra maiuscula\n");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("Caractere nao eh uma letra maiuscula\n");
    }
    else
    {
        printf("Caractere nao eh uma letra\n");
    }

    return 0;
}

