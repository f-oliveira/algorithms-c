#include<stdio.h>
int main()
{
	int numero;

	printf("Digite qualquer numero inteiro: ");
	scanf("%i", &numero);

	if ((numero > 100)&(numero < 200))
	{
		printf("\nVoce digitou um numero entre 100 e 200");
	}
	else
	{
	printf("\nVoce digitou um numero fora da faixa");
	}
}
