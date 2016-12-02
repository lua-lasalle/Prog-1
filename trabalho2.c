#include <stdio.h>

/* Unilasalle - Sistemas de Informação - Noite
   Aluna: Luana da Costa Bueno
   Matricula: 0050014451 */
   
int main ()
{
  float matA [2] [3];
  float matB [3] [2];
  float matR [2] [2];
  float soma;
  int i, j, m1, m2;
  
  printf("\n Entre com os núemros da matriz A, considerando que A [2x3]: \n");
  
  for(i=0; i<2; i++)
  {
    for(j=0; j<3; j++)
    {
      printf("\n A [%d] [%d]:", i+1, j+1);
      scanf("%f", &matA[i] [j]);
    }
  }
  
  printf("\n Entre com os núemros da matriz B, considerando que B [3x2]: \n");
  
  for(i=0; i<3; i++)
  {
    for(j=0; j<2; j++)
    {
      printf("\n B [%d] [%d]:", i+1, j+1);
      scanf("%f", &matB[i] [j]);
    }
  }
  
  printf("\n A matriz A = \n");
  for(i=0; i<2; i++)
  {
    for(j=0; j<3; j++)
    {
      if (j != (3-1))
      printf("%.2f \t", matA [i][j]);
      else
        printf("%.2f \n", matA [i][j]);
    }
  }
  
  printf("\n\n");
  
  printf("\n A matriz B = \n");
  for(i=0; i<3; i++)
  {
    for(j=0; j<2; j++)
    {
      if (j != (2-1))
      printf("%.2f \t", matB [i][j]);
      else
        printf("%.2f \n", matB [i][j]);
    }
  }

  for(m1=0; m1<2; m1++)
  {
    for(m2=0; m2<2; m2++)
    {
      soma = 0;
      for(i=0; i<3; i++)
      {
        soma = soma + matA[m1][i] * matB[i][m2];
      }
      matR [m1][m2] = soma;
    }
  }
  printf("\n\n");
  
  printf("\nO resultado de AxB = \n");
  
  for(i=0; i<2; i++)
  {
    for (j=0; j<2; j++)
    {
      if(j != 1)
      {
        printf("%.2f \t", matR [i][j]);
      } else {
        printf("%.2f \n", matR [i][j]);
      }
      
    }
  }



  return 0;
}