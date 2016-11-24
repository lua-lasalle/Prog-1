#include <stdio.h>

int main ()
{
  float nota [4][3]; /*numero de linhas antes do de colunas*/
  int i, j;
  
  for (i=0; i<=3; i++)
  {
    for (j=0; j<=2; j++)
    {
      printf("\nEntre com a av%d do aluno %d:\n",j+1, i+1);
      scanf("%f", &nota[i][j]);
      }
  }
  printf("\nResultado final:");
  printf("\n------------------------------\n");
  printf("\nNome \t\t Av1 \t\t Av2 \t\t Av3 ");
  printf("\n------------------------------\n");
  
  for(i=0; i<=3; i++)
  {
      printf("Aluno %d \t\t %f \t\t %f \t\t %f\n", i+1, nota[i][0], nota[i][1], nota[i][2]);

  }
    
  return 0;
}