#include<stdio.h>

int main()
{
	int i, n1, n2;
	srand(time(0));
	
	n1 = rand()%100;
	n2 = rand()%100;
	
	printf("N�mero 1: %i\nN�mero 2: %i\n", n1, n2);
	
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
