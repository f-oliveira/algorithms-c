#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <conio.h>
#include <time.h>

int main(void){
	
int num;

int opcao;
srand(time(NULL));


num=rand()%3;

printf("Jogador: %i\n",num);
printf ("Escolha: ");
printf ("\n0 - PEDRA\n1 - PAPEL\n2 - TESOURA\n");
scanf("%i",&opcao);

printf("\nJogador: %i\n",num);

if (opcao==0){
	printf("Voce escolheu pedra");
}else if(opcao==1){
	printf("Voce escolheu papel");
}else if (opcao==2){
	printf("Voce escolheu tesoura");
}

printf("\n\nBot %i\n",num);

if (num==0){
	printf("O bot escolheu pedra\n");
}else if(num==1){
	printf("O bot escolheu papel\n");
}else if(num==2){
	printf("O bot escolheu tesoura\n");
}

printf("\n");

if (opcao==num){
	printf("Voces empataram");
}else if ((opcao==0)&&(num==1)){
	printf("O computador venceu");
}else if ((opcao==0)&&(num==2)){
	printf("O Jogador venceu");
}else if ((opcao==1)&&(num==0)){
	printf("O Jogador venceu");
}else if ((opcao==1)&&(num==2)){
	printf("O computador venceu");
}else if ((opcao==2)&&(num==0)){
	printf("O Computador venceu");
}else if ((opcao==2)&&(num==1)){
	printf("O Jogador venceu");
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
