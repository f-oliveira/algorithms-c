#include<stdio.h>
#include<locale.h>
#include<math.h>

int main () {
	
	setlocale(LC_ALL, "");
	
	int n1,n2;
	
	printf("Escolha dois números: \n");
	scanf ("%i %i", &n1, &n2);
	
	if (n1 < n2){
		
		printf("\nOrdem crescente: \n%i \n%i ", n1, n2);
	}
	else{
		printf("\nOrdem crescente: \n%i \n%i ",n2 ,n1);
	}
}
