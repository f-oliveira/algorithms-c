#include<stdio.h>
#include<locale.h>
#include<math.h>

int main (){
	
	setlocale(LC_ALL, "");
	
	int a[4];
	int i;
	int pw,resultado,posicao;
	
	posicao = 3;
	resultado = 0;
	
	srand(time(0));
	
	for (i=0;i<4;i++){
		
		a[i] = rand()%2;
		printf("%i, ", a[i]);
	
	pw = pow(2,posicao);
	posicao -= 1;
	resultado += pw * a[i];	
		
	}
	printf("\b\b.");
	printf("\n%i ", resultado);
	
	
	
}
