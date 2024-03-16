/*
1. Faça um programa em C que determine se um número inteiro lido é par ou ímpar.
*/
#include <stdio.h>

int main(void)
{
  int num;
  printf("Digite um número inteiro: ");
  scanf("%d", &num);
  if(num%2 == 0)
  {
    printf("O número %d é par\n", num);
    return 0;
  }
  printf("O número %d é impar\n", num);
}