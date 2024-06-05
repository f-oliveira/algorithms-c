#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL,"");	
	
	char nome1[30];
	char nome2[30];
	int soma;
	int num1;
	int num2;
	int posicao;
	int posicao2;
	float vitoria1;
	float vitoria;
	

	printf("Jogador 1: \n\n");
	printf("Nome : ");	
	scanf("%s",nome1);	
	printf("Escolha seu lado: \n");
	printf("1 - Impar \n2 - Par\n ");
	scanf("%i",&posicao);
	
	if (posicao == 1){
		printf("\nVocê é Ímpar");	
	} else {
		printf("Você é Par");
	}
	
	printf("\nDigite um número de 0 a 5 : ");
	scanf("%i",&num1);
	system("cls");	
	
	printf("Jogador 2\n\n");
	printf("Nome: ");	
	scanf("%s",nome2);
	if (posicao == 1){
		printf("Você é Par");
	posicao2 = 2;	
	}else {
		printf("Você é Ímpar");
		posicao2 = 1;
	}
	printf("\nDigite um número de 0 a 5 : ");
	scanf("%i",&num2);
	system("cls");
		
		
	soma = num1 + num2;
	if (posicao == 1){
		printf("Nome : %s\nPosição : Ímpar\nNúmero : %i\n\n",nome1,num1);
		printf("Nome : %s\nPosição : Par\nNúmero : %i\n\n",nome2,num2);		
	}else  {
		printf("Nome : %s\nPosição : Par\nNúmero : %i\n\n",nome1,num1);
		printf("Nome : %s\nPosição : Ímpar\nNúmero : %i\n\n",nome2,num2);
	}
	
	vitoria1 = (soma%2);
	vitoria = soma;
	
	
	if (vitoria1==0){
		if (posicao == 1){
			printf("O número é Par\nVencedor : %s, jogador 2\n",nome2);	
		}else{
			printf("O número é Par\nVencedor : %s, jogador 1\n",nome1);	
		}
	}else{
		if (posicao2==2){
			printf("O número é Ímpar\nVencedor : %s, jogador 1\n",nome1);		
		}else{
			printf("O número é Ímpar\nVencedor : %s, jogador 2\n",nome2);			
		}
	}

}



