#include <stdio.h>

int main()

{
  char frase[50];
  int cont;
  
  printf("\nEntre comn a frase:");
  scanf("%s", frase);
  
  for (cont=1;cont<=10;cont++)
  {
    printf("\n%s", frase);
  }
  
  return 0;
}