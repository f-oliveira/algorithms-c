#include<stdio.h>
#include<locale.h> 

int main()
{
	setlocale(LC_ALL, "");

	int i, n;
	srand(time(0));
	n = rand()%8 + 1;
	
	printf("Numero aleatorio: %i", n);
	
	for(i = 0; i < 10; i++)
	{
		printf("\n%i * %i = %i", n, i, i * n);
	}
	
}
