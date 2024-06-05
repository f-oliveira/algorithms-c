#include<stdio.h>
#include<stdlib.h>

void retornaMensagem(int n);

main(){
	int h,m;
	printf("Entre com as horas atuais: \n->");
	scanf("%d",&h);
	printf("Entre com os minutos atuais: \n->");
	scanf("%d",&m);
	
	retornaMensagem(h);	
	
	
}

void retornaMensagem(int n){
	if(n>= 0 && n<=6){
		printf("Boa madrugada");
	}
	
	else if(n> 6 && n<=12){
		printf("Bom dia");
	}
	else if(n>12 && n<=18){
		printf("Boa tarde");
	}
	else{
		printf("Boa noite");
	}
}
