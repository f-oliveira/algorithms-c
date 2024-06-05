#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <conio.h>

int main(void)
{	
	int num;
	int i;
	int num2;
	float soma;

	num=(rand()%6);

	printf("Jogo Impar e Par com o Computador\n\n");
	printf("Escolha uma opcao");
	printf("\n\n1 - Par\n2 - Impar\n");
	printf("Escolha: ");
	scanf("%i",&i);

	if (i==1)
	{
		printf("\nVoce escolheu PAR");
	}
	else
	{
		printf("\nVoce escolheu IMPAR");
	}

	printf("\nDigite um numero de 0 a 5 : ");
	scanf("%i",&num2);

	soma=num+num2/2;

	if (i==1)
	{
		if ((soma)==(0||1||2||3||4||5))
		{
			printf("Voce ganhou o numero eh par");
			printf("\nPC : %i\nNumero : %1.2f",num,soma);	
		}
		else
		{
		printf("Voce perdeu o numero eh impar");
		printf("\nPC : %i\nNumero : %1.2f",num,soma);
		}	
	}



	if (i==2)
	{
		if ((soma)==(0||1||2||3||4||5))
		{
			printf("Voce perdeu o numero eh par");
			printf("\nPC : %i\nNumero : %1.2f",num,soma);
		}
		else
		{
			printf("Voce ganhou o numero eh impar");
			printf("\nPC : %i\nNumero : %1.2f",num,soma);	
		}
	}
}
