#include<stdio.h>
#include<locale.h>
#include<stdlib.h>


int main (){
	
	setlocale(LC_ALL,"");
	
	int num,aux,uni,dez;
	char d[][9] = {"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
	char u[][9] = {"I","II","II","IV","V","VI","VII","VIII","IX"};
	
	
	printf("Escolha um número: 1 a 50: \n");
	scanf("%i", &num);
	
	if (num < 0 || num > 50) {
		printf("Número inválido\n");
		system("pause");
		
		do {
			system("cls");
			printf("Escolha outro número: 1 a 50 \n");
			scanf("%i", &num);
		} while (num < 0 || num > 50);
	}
	
	uni = num % 10;
	aux = num/10;
	dez = aux % 10;
	aux = aux/10;
	
	
	if (num <= 9) {
	
	printf("-> %s %s",u[uni-1]);
}

	if (num >= 10  ) {
	
	printf("-> %s%s",d[dez-1],u[uni-1]);
}

	
}
