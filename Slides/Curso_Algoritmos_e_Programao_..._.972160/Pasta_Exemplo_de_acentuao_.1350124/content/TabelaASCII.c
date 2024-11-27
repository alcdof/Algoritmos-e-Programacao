#include <stdio.h>

int main(void)
{
    int x;

    for(x=0; x<=255; x++)
    {
        printf("%d: %c\n", x, x);
    }

    return 0;
}
