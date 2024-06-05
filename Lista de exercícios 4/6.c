#include<stdio.h>
#include<stdlib.h>

int retornaPot(int a, int b);

main(){
	int a, b;
	
	printf("Entre com o primeiro numero: \n->");
	scanf("%d",&a);
	printf("Entre com o segundo numero: \n->");
	scanf("%d",&b);	
	
	printf("\n\n[%d]",retornaPot(a,b));
}

int retornaPot(int a, int b){
	int i,s = a;
	
	for(i=1; i<b; i++){
		a = a*s;	
	}
	
	return a;
	
}
