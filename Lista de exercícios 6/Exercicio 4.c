#include<stdio.h>
#include<locale.h>
#include<math.h>

int main (){
	
	setlocale(LC_ALL, "");
	
	int pontosf1,pontosf2,pontosf3;
	float media,total;
	
	printf("Pontos fase 1: ");
	scanf("%i", &pontosf1);
	
	printf("\nPontos fase 2: ");
	scanf("%i", &pontosf2);
	
	printf("\nPontos fase 3: ");
	scanf("%i", &pontosf3);
	
	total = pontosf1 + pontosf2 + pontosf3;
	media = total / 3;
	
	printf("\nFase 1: %i \nFase 2: %i \nFase 3: %i \nMédia: %.2f", pontosf1, pontosf2, pontosf3, media);
}
