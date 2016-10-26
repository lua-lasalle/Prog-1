/*Faça um programa em C para ler um número inteiro e dizer se este é par ou impar:
Lembrando do operador de resto %
Então:
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
		//condição verdadeira
		printf("\n Numero par!");
	}
	else
	{
		//condição falsa
		printf("\n Numero impar!");
	}
	
	system ("pause");
	return 0;
	
}
