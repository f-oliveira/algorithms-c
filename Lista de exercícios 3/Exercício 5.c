#include<stdio.h>
#include<locale.h> 

int main()
{
	setlocale(LC_ALL, "");

	int i;
	srand(time(0));
	for(i = 0; i < 100; i++){
		
		printf("%i, ", i);
		
			if ((i % 9 == 0) && (i != 0)){
				printf("\n");
			}
		
	}
}
