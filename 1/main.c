#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int contador;

    for (contador = 3; contador <= 100; contador++)
    {
        if (contador % 3 == 0)
        {
            printf("%i\n", contador);
        }
    }
}
