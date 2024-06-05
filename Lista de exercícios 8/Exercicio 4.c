#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main (){ 

	int dia;

	printf("Escolha um número entre 1 e 365: ");
	scanf("%d", &dia);
	
	if(dia < 31 && dia > 0) {
		printf("Janeiro/2018");
	}

	if(dia > 31 && dia < 60) {
		printf("Fevereiro/2018");
	}
	
	if(dia > 59 && dia < 91) {
		printf("Março/2018");
	}
	
	if(dia > 90 && dia < 121) {
		printf("Abril/2018");
	}
	
	if(dia > 120 && dia < 152) {
		printf("Maio/2018");
	}
	
	if(dia > 151 && dia < 183) {
		printf("Junho/2018");
	}
	
	if(dia > 182 && dia < 213) {
		printf("Julho/2018");
	}
	
	if(dia > 212 && dia < 244) {
		printf("Agosto/2018");
	}
	
	if(dia > 243 && dia < 274) {
		printf("Setembro/2018");
	}
	
	if(dia > 273 && dia < 305) {
		printf("Outubro/2018");
	}
	
	if(dia > 304 && dia < 335) {
		printf("Novembro/2018");
	}
	
	if(dia > 334 && dia < 366) {
		printf("Dezembro/2018");
	}

}
