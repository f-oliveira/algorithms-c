#include<stdio.h>
int main()
{
	char equipeEsportiva[30];
	int vitorias, derrotas, empates;
	float vitoriasP, derrotasP, empatesP;
	
	//Recebe dados do usuario
	printf("Digite o nome da equipe: ");
	scanf(" %[^\n]s", &equipeEsportiva);
	
	printf("Digite as vitorias: ");
	scanf("%i", &vitorias);
	vitoriasP = vitorias + derrotas + empates * 100;
	
	printf("Digite as derrotas: ");
	scanf("%i", &derrotas);
	derrotasP = vitorias + derrotas + empates * 100;
	
	printf("Digite os empates: ");
	scanf("%i", &empates);
	empatesP = vitorias + derrotas + empates * 100;


	//Imprime os dados informados anteriormente e suas porcentagens
	printf("\n\nAbaixo todas informacoes necessarias: ");
	printf("\n\nEquipe esportiva: %s", equipeEsportiva);

	//Imprime os dados inteiro
	printf("\nVitorias: %i", vitorias);
	printf("\nDerrotas: %i", derrotas);
	printf("\nEmpates: %i\n", empates);
	
	//Imprime os dados float
	printf("\nPorcentual de vitorias: %.2f", vitoriasP);
	printf("\nPorcentual de derrotas: %.2f", derrotasP);
	printf("\nPorcentual de empates: %.2f", empatesP);
	
}
