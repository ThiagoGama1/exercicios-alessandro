#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total;
    int op1 = -1;
    int op2 = -1;
    int op3 = -1;
    while(op1 != 0 && op2 != 0 && op3 != 0)
    {


    printf("Quantas pessoas preferiram a opcao 1?\n");
    scanf("%i", &op1);
    if(op1 == 0)
    {
        break;
    }
    printf("Quantas pessoas preferiram a opcao 2?\n");
    scanf("%i", &op2);
    if(op2 == 0)
    {
        break;
    }
    printf("Quantas pessoas preferiram a opcao 3?\n");
    scanf("%i", &op3);
    if(op3 == 0)
    {
        break;
    }
    total = op1 + op2 + op3;
    printf("%.2f%% dos clientes preferiram a opcao 1\n", ((float)op1 / total) * 100);
    printf("%.2f%% dos clientes preferiram a opcao 2\n", ((float)op2 / total) * 100);
    printf("%.2f%% dos clientes preferiram a opcao 3\n", ((float)op3 / total) * 100);
    break;
    }

    if(op1 == 0 || op2 == 0 || op3 == 0)
    {

    printf("Os valores devem ser diferentes de 0.\n");

    }

    return 0;

}
