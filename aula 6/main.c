#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// versão 02 da game Advinhação
// Criando uma mensagem inicial
// Definir as variaveis
// Criar o laço de tentativas com as verificações

int main() {
  // Mensagem de boas vindas
  printf("Bem vindo ao jogo de advinhação");

  // Gerando um numero secreto aleatorio
  int segundos = time(0);
  srand(segundos);

  int numero = rand();
  int numerosecreto = numero % 100;
  int chute;
  int ganhou = 0;
  int tentavivas = 1;

  // Construindo o loop de reptição
  while (ganhou == 0) {
    printf("---Tentaviva %d---\n", tentavivas);
    printf("Chute seu numero: ");
    scanf("%d", &chute);
    printf("Seu chute foi %d \n", chute);

    int acertou = (chute == numerosecreto);
    int maior = chute > numerosecreto;

    // Verificando os valores do chute
    if (acertou) {
      printf("Parabens voce acertou!!!\n");
      ganhou = 1;
    } else if (maior) {
      printf("Seu chute foi maior\n");
    } else {
      printf("Seu chute foi menor\n");
    }
    tentavivas++;
  }
  return 0;
}