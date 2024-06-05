#include<stdio.h>
int main()
{
	char jogador[30];
	char time[30];
	int gols, assistencias, passesCertos, golsContra, cartaoAmarelo, passesErrados;
	float golsP, assistenciasP, passesCertosP, golsContraP, cartaoAmareloP, passesErradosP;
	
	//Recebe dados do usuario
	printf("Digite o nome do jogador: ");
	scanf(" %[^\n]s", &jogador);
	
	printf("Digite o nome do time: ");
	scanf(" %[^\n]s", &time);
	
	printf("Digite os gols: ");
	scanf("%i", &gols);
	golsP = gols * 3;
	
	printf("Digite as assistencias: ");
	scanf("%i", &assistencias);
	assistenciasP = assistencias * 1.5;
	
	printf("Digite os passes certos: ");
	scanf("%i", &passesCertos);
	passesCertosP = passesCertos * 0.5;
	
	printf("Digite os gols contra: ");
	scanf("%i", &golsContra);
	golsContraP = golsContra * -5;
	
	printf("Digite os cartoes amarelos: ");
	scanf("%i", &cartaoAmarelo);
	cartaoAmareloP = cartaoAmarelo * -1;
	
	printf("Digite os passes errados: ");
	scanf("%i", &passesErrados);
	passesErradosP = passesErrados * -0.5;


	//Imprime os dados informados anteriormente e suas porcentagens
	printf("\n\nAbaixo todas informacoes necessarias: ");
	printf("\n\nJogador: %s", jogador);
	printf("\nTime: %s\n", time);
	
	//Imprime os dados inteiro
	printf("\nGols: %i", gols);
	printf("\nAssistencias: %i", assistencias);
	printf("\nPasses certos: %i", passesCertos);
	printf("\nGols contra: %i", golsContra);
	printf("\nCartao amarelo: %i", cartaoAmarelo);
	printf("\nPasses errados: %i\n", passesErrados);
	
	//Imprime os dados float
	printf("\nPontuacao parcial de gol: %.2f", golsP);
	printf("\nPontuacao parcial de assistencias: %.2f", assistenciasP);
	printf("\nPontuacao parcial de passes certos: %.2f", passesCertosP);
	printf("\nPontuacao parcial de gols contra: %.2f", golsContraP);
	printf("\nPontuacao parcial de cartao amarelo: %.2f", cartaoAmareloP);
	printf("\nPontuacao parcial de passes errados: %.2f", passesErradosP);
	printf("\nPontuacao total do jogador: %.2f", golsP + assistenciasP + passesCertosP + golsContraP + cartaoAmareloP + passesErradosP);
	
}
