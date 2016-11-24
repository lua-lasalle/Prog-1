/* Faça um programa para ler uma palavra (max 20) e imprimir o inverso dela */

#include <stdio.h>
#include <string.h>

int main ()
{
  char nome[20];
  int i, tam;

  printf("\nEntre com uma palavra:");
  scanf("%s", nome);
  
  tam = strlen(nome);
  
   printf("\nPalavra invertida:");
  
  for (i=tam-1; i>=0; i--)
  {
    printf("%c", nome[i]);
  }
  
   printf("\n");
  
  return 0;
}