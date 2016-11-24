#include <stdio.h>
#include <string.h>

int main ()
{
  char nome[20];
  int i, tam;

  printf("\nEntre com uma palavra:");
  scanf("%s", nome);
  
  tam = strlen(nome);
  
   printf("\nPalavra caixa alta:");
  
  for (i=0; i<tam; i++)
  {
    printf("%c", nome[i]-32);
  }
  
   printf("\n");
  
  return 0;
}