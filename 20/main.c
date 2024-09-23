#include <stdio.h>

int main(void) {
  float salario = -1;
  int resposta = -1;
  int vip = 0, standard = 0;
  float porcentagem1, porcentagem2;
  float total;
  printf("Cadastrar cliente (digite 1) ou sair do programa (digite 0):\n");
  scanf("%i", &resposta);
  if(resposta == 0)
  {
    printf("Saindo do programa...\n");
  }
    else if(resposta != 0 && resposta != 1)
    {
      printf("Valor invalido\n");
    }
  else
  {
    do{
    printf("Digite o salário do cliente:\n");
    scanf("%f", &salario);
    if (salario >= 5000)
    {
      vip++;
    }
    else if (salario < 5000 && salario != 0)
    {
      standard++;
    }
    }while(salario != 0);
    total = vip + standard;
    porcentagem1 = (vip / total) * 100;
    porcentagem2 = (standard / total) * 100;
    printf("Cartao vip: %.2f%%\n", porcentagem1);
    printf("Cartao standard: %.2f%%\n", porcentagem2);

  }

  return 0;
}
