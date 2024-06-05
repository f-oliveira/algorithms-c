#include<stdio.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL, "");
	
	int x;
	int cont=0, y=1, soma=1;
	
	printf("Insira um número: ");
	scanf("%d",&x);
	
	while(y < x){
		cont++;
		y += 2;
		y += soma;
	}
	
	if(y == x){
		printf("\nÉ um quadrado perfeito com raiz %d",cont+1);
	}
	else{
		printf("Não é um quadrado perfeito");
	}
		
}
