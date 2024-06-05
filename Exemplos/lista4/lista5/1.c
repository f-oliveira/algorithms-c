#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	srand(time(NULL));
	int vet[4],i;	
	
	for(i=0; i<4; i++){
		printf("Entre com o numero:\n->");
		scanf("%d",&vet[i]);
	}
	
	printf("\n\nImprimindo: ");
	for(i=0; i<4; i++){
		printf("[%d] ",vet[i]);
	}
}
