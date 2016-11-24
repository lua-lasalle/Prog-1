#include <stdio.h>

int main ()

{
  float soma=0, media;
  float av1[10];
  int i;
  
  for(i=0; i<=9; i++)
  {
    printf("\n Entre com a Av1 do aluno %d =\n", i+1);
    scanf("%f", &av1[i]);
    soma= soma + av1[i];
  }
  
  media= soma/10;
  printf("\n Media= %f \n", media);
  
  printf("\n Alunos com nota maior ou igual a media=\n");
  
  for(i=0; i<=9; i++)
  {
    if (av1[i] >= media)
    {
      printf("\n Aluno %d -> nota: %f", i+1, av1[i]);
    }
  }
  
  return 0;
}