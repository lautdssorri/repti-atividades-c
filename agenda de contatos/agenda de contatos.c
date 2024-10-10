#include <stdio.h>

int main(void) {

//criar nome e contatos]
  typedef struct {
  char nome [50];
  char telefone[25];
  } contatos;

  contatos contato[5];
printf("Digite o nome e o tefefone dos contatos:\n");

printf("Nome:Laura Sorrilha\n ");
printf("Telefone:44-998365973\n ");

printf("Nome:Suelen Dias\n ");
printf("Telefone:44-998654774\n ");

printf("Nome:Sofia loren\n ");
printf("Telefone:44-999650294\n ");
        
  return 0;
}