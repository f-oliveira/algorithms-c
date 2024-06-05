#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
int main(){
setlocale(LC_ALL,"");	

char nome1[30];
char nome2[30];
int opcao;
int opcao2;

	
printf("Primeiro jogador\n\n");
printf("Nome : ");	
scanf("%s",nome1);	
printf("Escolha seu opção : \n");
printf("1 - Pedra \n2 - Papel\n3 - Tesoura\n");
printf("Opção: ");
scanf("%i",&opcao);

system("cls");

printf("Segundo jogador\n\n");
printf("Nome : ");	
scanf("%s",nome2);	
printf("Escolha seu opção : \n");
printf("1 - Pedra \n2 - Papel\n3 - Tesoura\n");
printf("Opção : ");
scanf("%i",&opcao2);

system("cls");


printf("\n\nNome : %s\n",nome1);
if (opcao == 1){
	printf("Pedra");
} if (opcao == 2){
	printf("Papel");
} if (opcao == 3){
	printf("Tesoura");
}
printf("\n\nNome : %s\n",nome2);
if (opcao2 == 1){
	printf("Pedra");
}if (opcao2 == 2){
	printf("Papel");
}if (opcao2 == 3){
	printf("Tesoura");
}

system ("cls");

if (opcao==opcao2){
	printf("Os dois jogadores escolheram a mesma opção\nEmpate");
}
if ((opcao==1)&&(opcao2==2)){
	printf("O jogador 2 ganhou\nJogador 2 : Papel\nJogador 1 : Pedra");
}
if ((opcao==1)&&(opcao2==3)){
	printf("O jogador 1 ganhou\nJogador 1 : Pedra\nJogador 2 : Tesoura");
}
if ((opcao==2)&&(opcao2==3)){
	printf("Jogador 2 ganhou\n Jogador 2 : Tesoura\nJogador 1 : Papel");
}
if ((opcao==2)&&(opcao2==1)){
	printf("Jogador 1 ganhou\nJogador 1 : Papel\nJogador 2 : Papel");
}
if ((opcao==3)&&(opcao2==1)){
	printf("Jogador 2 ganhou\nJogador 2 : Pedra\nJogador 1 : Tesoura");
}
if ((opcao==3)&&(opcao2==2)){
	printf("Jogador 1 ganhou\nJogador 1 : Tesoura\nJogador 2 : Papel");
}







}
