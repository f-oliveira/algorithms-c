#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL, "");
	
	int x;
	int cont=0, y=1, soma=1;
	
	printf("Insira um n�mero: ");
	scanf("%d",&x);
	
	while(y < x){
		cont++;
		y += 3;
		y += soma;
	}
	
	if(y == x){
		printf("\n� um quadrado perfeito com raiz %d",cont+1);
	}
	else{
		printf("N�o � um quadrado perfeito");
	}
		
}
