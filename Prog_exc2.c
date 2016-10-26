/* Faça um programa em C para ler uma idade e dizer se esta pessoa pode dirigir ou não.
Assumindo que só maiores de idade podem dirigir */

#include <stdio.h>

int main ()

{
	int idade;
	
	printf ("\n Entre com a idade: ");
	scanf("%d", &idade);
	
	if( (idade >= 18))
	{
		printf("Voce pode dirigir!");
	}
	else
	{
		printf("Voce nao pode dirigir!");
	}
	
	return 0;
}
