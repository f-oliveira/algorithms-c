#include<stdio.h>
#include<stdlib.h>

main(){
	
	int num;
	printf("Entre com um numero:\n->");
	scanf("%d",&num);
	int rest=0;
	
	while(num>0){
		int aux = num;
		aux = aux/10;
		printf("Aux = %d",aux);
		rest = rest + (num-aux*10);
		num = num/10;
	}
	
	printf("\n\n->%d",rest);
	
	
	
}
