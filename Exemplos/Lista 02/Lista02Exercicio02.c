#include<stdio.h>
#include<string.h>
int main()
{	
	int vida;
	int ataque;
	int defesa;
	float xp;

	printf("Digite os stats do jogador: ");
	printf("\nVida: ");
	scanf("%i",&vida);
	printf("Ataque: ");
	scanf("%i",&ataque);
	printf("Defesa: ");
	scanf("%i",&defesa);

	xp = (vida + ataque + defesa) / 3;

	if (xp < 26)
	{
	printf("O jogador eh novato");
	}
	else if ((25 < xp)&&(xp < 51))
	{
	printf("O jogador eh um mago");
	}
	else if ((50 < xp)&&(xp < 76))
	{
	printf("O jogador eh um mago supremo");
	}
	else if ((50 < xp)&&(xp <= 100))
	{
	printf("O jogador eh um lorde das magias");
	}
}
