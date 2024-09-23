#include <stdio.h>
#include <stdlib.h>
#define SM 880.05

int main(void)

{
    int contador;
    int total = 0;
    int A = 0;
    int B = 0;
    int C = 0;
    float salario;

    for(contador = 1; contador <= 1000; contador++)
    {
        printf("Qual o seu salário?\n");
        scanf("%f", &salario);

        if(salario >= SM * 15)
        {
            A++;
        }
        else if (salario < 15 * SM && salario >= 5 * SM)
        {
            B++;
        }
        else
        {
            C++;
        }
    }
    total = A + B + C;
    printf("A porcentagem de pessoas na classe A é: %.2f%%\n", ((float)A / total) * 100);
    printf("A porcentagem de pessoas na classe B é: %.2f%%\n", ((float)B / total) * 100);
    printf("A porcentagem de pessoas na classe C é: %.2f%%\n", ((float)C / total) * 100);

    return 0;
}
