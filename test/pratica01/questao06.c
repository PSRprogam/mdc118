// Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).

#include <stdio.h>
#include <math.h>

int main(){

  float coeficiente_a;
  float coeficiente_b;
  float coeficiente_c;
  float raiz1;
  float raiz2;
  float delta;
  
  printf("Digite o valor do coeficiente a:");
  scanf("%f", &coeficiente_a);
  printf("Digite o valor do coeficiente b:");
  scanf("%f", &coeficiente_b);
  printf("Digite o valor do coeficiente c:");
  scanf("%f", &coeficiente_c);

  delta = (coeficiente_b*coeficiente_b)-(4*coeficiente_a*coeficiente_c);
  raiz1 = (-coeficiente_b + sqrt(delta)) / 2* coeficiente_a;
  raiz2 = (-coeficiente_b - sqrt(delta)) / 2* coeficiente_a;

  printf("As raizes da sua função são %f e %f\n", raiz1, raiz2);
  return 0; 
  
}