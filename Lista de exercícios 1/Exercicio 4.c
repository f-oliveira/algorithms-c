#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	char nome[30];
	int atq,def,vida,xp;
	
	printf("Escolha um nome: ");
	scanf("%s", &nome);
	
	printf("Experiência: ");
	scanf("%i", &xp);
	
	vida = xp;
	atq = (xp / 100)*70;
	def = (xp / 100)*125;
	
	printf("\nNome: %s \nVida: %i \nAataque: %i \nDefesa: %i",nome ,vida ,atq ,def);
	
}
