/* Faça um programa em C para ler uma letra e dizer se é maiuscula ou minuscula */

#include <stdio.h>

int main()

{
  char letra;
   
  printf("\nEntre com uma letra:");
  scanf("%c", &letra);
  
  if ( (letra>=65) && (letra<=90) )
  {
    printf("Letra maiuscula!\n");
  }
  else
  {
    if ( (letra>=48) && (letra<=57) )
  {
    printf("Isso é um numero!\n");
  } 
    else 
  
    {printf("Letra minuscula!\n");}
  }
  
  return 0;
}