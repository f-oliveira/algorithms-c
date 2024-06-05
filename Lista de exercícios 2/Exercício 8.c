#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
	srand(time(0));
	int num1, i, esc, a, g;

	i = 0;

	num1 = rand() % 100 ;

	printf("Voce tem 5 tentativas para acertar um numero aleatorio entre 0 e 100 ");

	do
	{  
		printf("\n\nDigite o numero: ");
		scanf("%i",&esc);
		i=i+1;

		if (num1==esc)
		{
			printf("\nVoce acertou o numero aleatorio: \nNumero aleatorio: %i \nSeu numero: %i",num1,esc);
			return 0;
		}else if (esc > num1)
		{
			printf("Voce errou, %i e maior que o numero",esc);
		}else if (esc < num1)
		{
			printf("Voce errou, %i e menor que o numero ",esc);
		}
	}
	while(i<5);
	printf("\n\nSuas chances acabaram");
}


