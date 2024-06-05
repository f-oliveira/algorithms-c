#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
	srand(time(0));
	int num7, i, num2, a, g;

	i = 0;

	num7 = rand() % 101 ;

	printf("Voce tem 5 tentativas para acertar um numero aleatorio entre 0 e 100 ");

	do
	{  
		printf("\n\nDigite o numero: ");
		scanf("%i",&num2);
		i=i+1;

		if (num7==num2)
		{
			printf("\nVoce acertou o numero aleatorio: %i = %i",num7,num2);
			return 0;
		}else if (num2 > num7)
		{
			printf("Voce errou, %i e maior que o numero",num2);
		}else if (num2 < num7)
		{
			printf("Voce errou, %i e menor que o numero ",num2);
		}
	}
	while(i<5);
	printf("\n\nSuas chances acabaram");
}


/*
{
    printf("intervalo da rand: [0,%d]\n",101);
    srand( time(NULL) );

    for(g=1 ; g <= 10 ; g++)
        printf("Numero %d: %d\n",g, rand());
        
}*/
