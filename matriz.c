/* faça um programa para ler as 3 notas de 4 alunos*/

#include <stdio.h>

int main ()
{
  float nota [4][3]; /*numero de linhas antes do de colunas*/
  int i, j;
  
  for (i=0; i<=3; i++)
  {
    for (j=0; j<=2; j++)
    {
      printf("\nEntre com a av%d do aluno %d:",j+1, i+1);
      scanf("%f", &nota[i][j]);
    }
  }
  
  return 0;
}