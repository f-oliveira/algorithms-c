#include<stdio.h>
#include<locale.h>
#include<time.h>

int main() {
	setlocale(LC_ALL,"");
	//sintaxe de criação de arrays
	//tipo_de_dado nome_do_array[];
	//tipo_de_dado nome_do_array[10];
	//tipo_de_dado nome_do_array[] = {1,2,3,4};
	//tipo_de_dado nome_do_array[4] = {1,2,3,4};
	
	int numeros[] = {2,4,6,8};
	int numrand[10];
	int i;
	int soma;

	
	for(i=0; i<4; i++){
		printf("%i, ", numeros[i]);
	}
	
	printf("\b\b.");
	
	printf("\n");
	srand(time(0));
	
	for(i=0; i<10; i++){
		
		numrand[i] = rand()%10;
		printf("%i, ", numrand[i]);
		soma += numrand[i]; //soma = soma + numrand[i];
	}
	printf("\b\b."); //apaga as duas ultimas caracteres
	
	printf("\nSoma: %i\n", soma);
	
}
