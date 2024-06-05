#include<stdio.h>
#include<string.h>
int main()
{
	char time1[30];
	char time2[30];
	int vitoria1, vitoria2, empate1, empate2, derrota1, derrota2, ponto1, ponto2;

	//Informacoes primeira equipe
	printf("Primeira equipe: ");
	printf("\n\nDigite o nome da primeira equipe: ");
	scanf(" %[^\n]s",time1);
	printf("Número de vitorias: ");
	scanf(" %i",&vitoria1);
	printf("Numero de empates: ");
	scanf(" %i",&empate1);
	printf("Numero de derrotas: ");
	scanf(" %i",&derrota1);

	//Informacoes segunda equipe
	printf("\n\nSegunda equipe: ");
	printf("\n\nDigite o nome da segunda equipe: ");
	scanf(" %[^\n]s",time2);
	printf("Numero de vitorias: ");
	scanf(" %i",&vitoria2);
	printf("Numero de empates: ");
	scanf(" %i",&empate2);
	printf("Numero de derrotas: ");
	scanf(" %i",&derrota2);

	ponto1 = (3*vitoria1)+empate1;
	ponto2 = (3*vitoria2)+empate2;

	printf(" \n\n Dados dos times: \n\n");
	printf("Time 1: %s\nVitorias: %i\nEmpates: %i\nDerrotas: %i\nPontuacao: %i", time1, vitoria1, empate1, derrota1, ponto1);
	printf("\n\nTime 2: %s\nVitorias: %i\nEmpates: %i\nDerrotas: %i\nPontuacao: %i", time2, vitoria2, empate2, derrota2, ponto2);
}
	
