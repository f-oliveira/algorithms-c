#include<stdio.h>
#include<stdlib.h>

main(){
	int num;
	printf("Entre um numero\n->");
	scanf("%d",&num);
	
	char d[2][5] = {"Par","Impar"};
	
	printf("O numero %d eh %s",num,d[num%2]);
}
