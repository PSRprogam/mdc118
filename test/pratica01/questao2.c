// Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
#include <stdio.h>

int main (){

  int valor_base;
  int valor_altura;

  printf("Valor da Base:");
    scanf("%i", &valor_base);
  
  printf("Valor da Altura:");
    scanf("%i", &valor_altura);

  int area = valor_base * valor_altura / 2;

  printf("Resultado: %i", area);

  return 0;
}