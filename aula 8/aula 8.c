#include <stdio.h>
#include <string.h>

int main(void) {
  //Declarando um ARRAY de strings
  char string[100] = "TDS";

  //usando o strlen
  int tamanho = strlen(string);
  // printf("O tamanho da string é: %d\n" , tamanho);

  //Usando o strcpy
  char strCopy[100];
  strcpy(strCopy, string);
  // printf("Ola %s \n", strCopy);

  //Usando o strcat
  char str2[100] = "programando em 'C'";
  strcat(string, str2);
  // printf("Concatenação das strings: %s\n", string);

  // Usanso o strcmp
  int comparacao = strcmp(string, strCopy);
  // printf("Valor da comparação %d\n");
  if (comparacao ==0){
    // printf("As strings são iguais\n");
  } else{
    // printf("As strings são diferentes\n");
  }

  // Como manipular ARRAYS
  int arr[] = {1,2,3,4,5};
  int n  = sizeof(arr) / sizeof(arr[0]);
  printf("O tamanho do array é: %d\n", n);
  return 0;
}