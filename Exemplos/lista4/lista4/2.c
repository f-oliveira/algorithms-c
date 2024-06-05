#include<stdio.h>
#include<stdlib.h>

void imprimeNumeros(int n);

main(){
	int n;
	printf("Entre com um numero: \n->");
	scanf("%d",&n);
	
	imprimeNumeros(n);
	
}

void imprimeNumeros(int n){
	int i;
	for(i = 0; i < n; i++){
		printf("[%d]  ",i);
	}
}
