// Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.

#include <stdio.h>

int main(){

  float valor_r;
  const float PI = 3.1416;
  
  printf("Valor do raio:");
    scanf("%f", &valor_r);

  float perimetro = 2 * PI * valor_r;

  printf("Seu P é: %f", perimetro);
  
  return 0;
}