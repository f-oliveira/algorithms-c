#include<stdio.h>
#include<locale.h> 

int main()
{
	setlocale(LC_ALL, "");
	printf("Lista 03 Exercicio 02.\n\n");

	int i, n, unidade, dezena, centena, milhar;
	srand(time(0));
	n = rand()%8999 + 1000;
	
	printf("Numero aleatorio: %i", n);
	
	milhar = n / 1000;
	printf("\nMilhar: %i", milhar);
	
	centena = (n / 100) % 10;
	printf("\nCentena: %i", centena);
	
	dezena = (n / 10) % 10;
	printf("\nDezena: %i", dezena);
	
	unidade = n % 10;
	printf("\nUidade: %i", unidade);
	
}
