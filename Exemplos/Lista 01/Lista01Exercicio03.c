#include<stdio.h>
int main()
{
	char jogador[30];
	int statusVida;
	int ataque;
	int defesa;
	
	//Recebe dados do usuário
	printf("Digite o nome do jogador: ");
	scanf("%[^\n]s", &jogador);
	
	printf("Digite o status vida: ");
	scanf("%i", &statusVida);
	
	printf("Digite o ataque: ");
	scanf("%i", &ataque);
	
	printf("Digite a defesa: ");
	scanf("%i", &defesa);


	//Imprime os dados informados anteriormente
	printf("\n\nJogador: %s\n", jogador);
	printf("Status Vida: %i\n", statusVida);
	printf("Ataque: %i\n", ataque);
	printf("Defesa: %i\n", defesa);
}
