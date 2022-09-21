// Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
#include <stdio.h>
#include <math.h>

int main(){

  float valor_produto;
  const float ICMS = 17/100;
  const float COFINS = 7.6/100;
  const float PIS_PASEP = 1.65/100;
  
  printf ("Valor do produto: ");
    scanf("%f", &valor_produto);

  float produto_final = ((1+ICMS+COFINS+PIS_PASEP) * valor_produto);
   printf("Preço final é: %.2f", produto_final); 
  float valor_ICMS = ICMS * valor_produto;
  printf("Valor do ICMS sobre o produto é: %.2f", valor_ICMS); 
  
    
  return 0;
}