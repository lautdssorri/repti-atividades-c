#include <math.h>//Importando a blibioteca de matematica
#include <stdio.h>

int main() {
 // Criando variaveis
  float a,b,c; //Lados do triangulo

  //Entrada dos dados
  printf("Digite o valor do primeiro lado (b):");
  scanf("%f" , &b);

  printf("Digite o valor do segundo lado (c):");
  scanf("%f" , &c);

  //Calculando o valor de a 
  a = sqrt((b * b) + (c * c));

  // Resultado
  printf("A hipotenusa do triangulo é: %.1f\n",a);
  return 0;
}