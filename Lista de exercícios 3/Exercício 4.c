#include<stdio.h>
#include<locale.h> 

int main()
{
	setlocale(LC_ALL, "");

	int i, n[100];
	srand(time(0));
	
	
	for(i = 0; i < 100; i++)
	{
		n[i] = rand()%200 - 100;
		printf(" %i", n[i]);
	}
	
	
}
