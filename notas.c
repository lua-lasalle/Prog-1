#include <stdio.h>

int main ()
{
  float nota [4][3], media, av1, av2, av3; /*numero de linhas antes do de colunas*/
  int i, j, mat;
  
  for (i=0; i<=3; i++)
  {
    for (j=0; j<=2; j++)
    {
      printf("\nEntre com a av%d do aluno %d:\n",j+1, i+1);
      scanf("%f", &nota[i][j]);
      }
  }
  printf("\nResultado final:");
  printf("\n---------------------------------------------------------------------------------------\n");
  printf("\nNome \t\t\t Av1 \t\t Av2 \t\t Av3 ");
  printf("\n---------------------------------------------------------------------------------------\n");
  
  for(i=0; i<=3; i++)
  {
      printf("Aluno %d \t\t %.2f \t\t %.2f \t\t %2.f\n", i+1, nota[i][0], nota[i][1], nota[i][2]);
     printf("\n---------------------------------------------------------------------------------------\n");

  }
  
  printf("\nResultado da AV1:");
  printf("\n-----------------------------------------\n");
  printf("\nNome \t\t\t Av1 ");
  printf("\n-----------------------------------------\n");
  
   for(i=0; i<=3; i++)
  {
      printf("Aluno %d \t\t %.2f \n", i+1, nota[i][0]);
      printf("\n----------------------------------------\n");
  }
  
  printf("\nEntre com a matricula:");
  scanf("%d",&mat);
  
  printf("\nResultado final:");
  printf("\n---------------------------------------------------------------------------------------\n");
  printf("\nNome \t\t\t Av1 \t\t Av2 \t\t Av3 \t\t Resultado");
  printf("\n---------------------------------------------------------------------------------------\n"); 
  
  i = mat-1;
  av1 = nota[i][0];
  av2 = nota[i][1];
  av3 = nota[i][2];
  
  if(av1>=av2 && av1>=av3) //av1 é a maior
  {
    if(av2>av3)
    {
       media= (av1+av2)/2;
    } 

    else
    {
     media= (av1+av3)/2;
    }
  } 
  else if(av2>av3) //av2 é a maior
  {
    if(av1>av3)
    {
      media = (av2+av1)/2;
    }
    else
    {
      media = (av2+av3)/2;
    }
  }
  else if (av1>av2) //av3 é a maior
  {
      media = (av3+av1)/2;
  }
    else
    {
      media = (av3+av2)/2;
    }
  
  if (media>=6)
  {
     printf("Aluno %d \t\t %.2f \t\t %.2f \t\t %2.f \t\t Aprovado\n", mat, nota[i][0], nota[i][1], nota[i][2]);
  }
 else{
    printf("Aluno %d \t\t %.2f \t\t %.2f \t\t %2.f \t\t Reprovado\n", mat, nota[i][0], nota[i][1], nota[i][2]);
 }
  printf("\n---------------------------------------------------------------------------------------\n"); 
  
  return 0;
}