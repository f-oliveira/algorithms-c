#include<stdio.h>
#include<string.h>
 #include<locale.h>
 #include<stdlib.h>
#include <conio.h>
#include <time.h>
int main(void){


srand(time(NULL));
int num;
int opcao;

num=(rand()%9)+1;


printf("\n\n\n\nEscolha uma posicao para chutar a bola:\n\n\n");
printf("\n==========================================================");
printf("\n|                  |                    |                |");
printf("\n|                  |                    |                |");
printf("\n|        1         |         2          |        3       |");
printf("\n|                  |                    |                |");
printf("\n|                  |                    |                |");
printf("\n|        4         |         5          |        6       |");
printf("\n|                  |                    |                |");
printf("\n|                  |                    |                |");
printf("\n|        7         |         8          |        9       |");
printf("\n|                  |                    |                |\n\n");
printf("Escolha a posicao onde vai chutar a bola: ");
scanf("%i",&opcao);

printf("\n\nO goleiro pulou na posicao %i: ",num );

if (opcao==num){
	printf("\n\n\nO goleiro defendeu seu chute ! ");
}else{
	printf("\n\n\nVoce acertou o gol !");
}














 















}


