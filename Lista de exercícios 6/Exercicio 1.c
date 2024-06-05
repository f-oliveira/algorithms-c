#include<stdio.h>
#include<locale.h>
#include<math.h>

int main () {
	
	setlocale(LC_ALL, "");
	
	int i,j,k;
	
	printf("Escolha um número: \n");
	scanf("%i", &i);
	
	j = pow(i,2);
	
	k = pow(i,3);
	
	printf("\nAo quadrado = %i \nAo cubo = %i ", j , k);
	
}
