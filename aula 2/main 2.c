#include <stdio.h>
// Fazendo produto de dois números
int main() {
  // Declarando as variaveis
  int num1, num2, produto;
  printf("Digite o primeiro número:");
  scanf("%d", &num1);

  printf("Digite o segundo número:");
  scanf("%d", &num2);

  // Processando dados
  produto = num1 * num2;

  // Exibindo os dados obtidos
  printf("A multiplicação de %d e %d é igual a %d\n", num1, num2, produto);
  return 0;
}