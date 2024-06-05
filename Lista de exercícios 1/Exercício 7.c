#include<stdio.h>
#include<string.h>

int main(){

char nome[30];
char nome2[30];
float vida;
float ataque;
float vida2;
float ataque2;
float vida3;
float vida4;



printf("Digite o nome do primeiro personagem : ");
scanf("%s",nome);
printf("Digite a vida do primeiro personagem : ");
scanf("%f",&vida);
printf("Digite o seu ataque : ");
scanf("%f",&ataque);

printf("Digite o nome do segundo personagem : ");
scanf("%s",nome2);
printf("Digite a vida do segundo personagem : ");
scanf("%f",&vida2);
printf("Digite o seu ataque : ");
scanf("%f",&ataque2);

system("cls");


printf("Dados dos personagens: \n");
printf("Nome : %s\nVida : %3.4f\nAtaque : %3.4f%\n\n\nNome : %s\nVida : %3.4f\nAtaque : %3.4f%\n\n\n\n\n",nome,vida,ataque,nome2,vida2,ataque2);


vida3 = vida - ataque2;
vida4 = vida2 - ataque;


printf("Dados dos personagens apos a batalha:\n ");
printf("Nome : %s\nVida : %3.2f\nAtaque : %3.2f%\n\n\nNome : %s\nVida : %3.2f\nAtaque : %3.2f%\n\n\n\n\n",nome,vida3,ataque,nome2,vida4,ataque2);






















}
