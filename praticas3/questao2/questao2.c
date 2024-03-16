// 2. Faça um programa em C que calcule o valor do desconto 
// sobre um valor bruto lido com base na escala: até de 100.00 aplica 1%; 
// de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%.

#include <stdio.h>

int main(void)
{
  float valor_bruto = 0;
  float valor_liquido = 0;
  float valor_desconto = 0;

  printf("Digite o valor bruto: ");
  scanf("%f", &valor_bruto);

  if (100.01 <= valor_bruto && valor_bruto <= 500.00)
  {
    valor_desconto = valor_bruto * 0.05;
    printf("desconto de cinco porcento: %.2f\n", valor_desconto);
    printf("valor liquido: %.2f\n", valor_bruto - valor_desconto);
    return 0;
  } 
  else if (valor_bruto > 500.00)
  {
    valor_desconto = valor_bruto * 0.1;
    printf("desconto de dez porcento: %.2f\n", valor_desconto);
    printf("valor liquido: %.2f\n", valor_bruto - valor_desconto);
    return 0;
  }
  
  valor_desconto = valor_bruto * 0.01;
  printf("desconto de um porcento: %.2f\n", valor_desconto);
  printf("valor liquido: %.2f\n", valor_bruto - valor_desconto);
}