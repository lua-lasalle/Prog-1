/*Fa�a um programa em C para ler um n�mero inteiro e dizer se este � par ou impar:
Lembrando do operador de resto %
Ent�o:
10 % 2 -> 0
5 % 2 -> 1 */

#include <stdio.h>

int main ()

{
	int num;
	
	printf("\n Entre com um numero:");
	scanf("%d", &num);
	
	if( (num%2)==0 )
	{
		//condi��o verdadeira
		printf("\n Numero par!");
	}
	else
	{
		//condi��o falsa
		printf("\n Numero impar!");
	}
	
	system ("pause");
	return 0;
	
}
