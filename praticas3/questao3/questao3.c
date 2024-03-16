// 4. Faça um programa em C que leia uma tecla pressionada e 
// determine se ela é uma letra, um dígito ou um caractere especial.
#include <stdio.h>

int main(void)
{
  char tecla = ' ';
  printf("Digite uma tecla: ");
  scanf("%c", &tecla);

  if (33 <= tecla && tecla <= 47 || 58 <= tecla && tecla <= 64 || 91 <= tecla && tecla <= 96 || 123 <= tecla && tecla <= 126)
  {
    printf("O caractere %c é especial\n", tecla);
    return 0;
  } 
  else if(48 <= tecla && tecla <= 57)
  {
    printf("O caractere %c é um dígito\n", tecla);
    return 0;
  }
  else if (65 <= tecla && tecla <= 90 || 97 <= tecla && tecla <= 122)
  {
    printf("O caractere %c é uma letra\n", tecla);
    return 0;
  }
}