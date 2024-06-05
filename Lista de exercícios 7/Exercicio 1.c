#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main (){
	
	setlocale(LC_ALL,"");
	
	int num, inversao, aux, digitos;
	
	printf("Digite um número inteiro: ");
	scanf("%d",&num);
	
	aux = num;
	
	do  {
		
		digitos = num % 10;
		inversao = (inversao * 10) + digitos;
		num = num/10;
			
	} while (num != 0);
	
	if(aux == inversao) {
		printf("É um palindromo !");
		
	} 
	else {
	printf("Não é um palindromo !");
	}
}
