#include <stdio.h>

int main()

{
  float av1, av2, media;
  char nome[20];
  
  printf("\nEntre com o nome:");
  scanf("%s", nome);
  
  printf("\nEntre com a nota da av1:");
  scanf("%f", &av1);
  
  printf("\nEntre com a nota da av2:");
  scanf("%f", &av2);
  
  media = (av1+av2) / 2;
  
  printf("\nOla %s, Media = %.2f", nome, media);
  
  return 0;
}