#include<stdio.h>

int main()
{
	printf("Lista 03 Exercicio 01.\n\n");

	int i, n1, n2;
	srand(time(0));
	
	n1 = rand()%100;
	n2 = rand()%100;
	printf("N1: %i\nN2: %i\n", n1, n2);
	
	if(n1<n2)
	{
		for(i = n1+1; i < n2; i++)
		{
			printf("%i,", i);
		}
		printf("\n");
	}
	else
	{
		for(i = n2 + 1; i < n1; i++)
		{
			printf("%i, ", i);
		}
		printf("\n");
	}
}
