#include<stdio.h>
#include<stdlib.h>

void imprimeFib(int n);

main(){
	int n;
	
	printf("Entre com um numero\n->");
	scanf("%d",&n);
	
	imprimeFib(n);
}

void imprimeFib(int n){
	int a=0, b=1;
	
	printf("%d ",b);
	
	do{
		int s = a;
		a = b;
		b = a+s;
		printf("%d ",b);

	}while(b<n);
}
