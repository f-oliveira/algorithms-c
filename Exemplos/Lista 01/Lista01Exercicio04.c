#include<stdio.h>
int main()
{
	char jogador[30];
	int xp;  //Experiencia do jogador
	
	//Recebe dados do usuário
	printf("Digite o nome do jogador: ");
	scanf("%[^\n]s", &jogador);
	
	printf("Digite a sua experiencia em xp: ");
	scanf("%i", &xp);
	float statusVida = 1*xp;
	float ataque = 0.7*xp;
	float defesa = 1.25*xp;


	//Imprime os dados informados anteriormente e suas porcentagens
	printf("\n\nJogador: %s\n", jogador);
	printf("Experiencia Jogador: %i\n", xp);
	printf("Status Vida que eh 100 por cento: %.2f\n", statusVida);
	printf("Ataque que eh 70 por cento: %.2f\n", ataque);
	printf("Defesa que eh 125 por cento: %.2f\n", defesa);
	
	
}
