#include<stdio.h>
#include<locale.h>

int main(){
	
	char nome[30];
	int atq,def,vida;
	
	printf("Escolha um nome: ");
	scanf("%s", &nome);
	
	printf("Vida: ");
	scanf("%i", &vida);
	
	printf("Ataque ");
	scanf("%i", &atq);
	
	printf("Defesa: ");
	scanf("%i", &def);
	

	
	printf("\nNome: %s \nVida: %i \nAataque: %i \nDefesa: %i",nome ,vida ,atq ,def);
	
}
