#include <stdio.h>
#include <stdlib.h>

//Escrever um algoritmo que exiba todos os
//múltiplos de 7 ou 13 que estão no intervalo entre 1000 e 1500.
int main()
{
    int contador;
    int multiplos = 0;
    //loop pra passar no limite pedido
    for(contador = 1000; contador <= 1500; contador++)
    {
        if(contador % 7 == 0 || contador % 13 == 0)
        {
            printf("%i\n", contador);

        }
    }
    return 0;
}
