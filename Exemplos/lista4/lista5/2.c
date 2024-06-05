#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

main(){
	srand(time(NULL));
	int vet[4],i,c = 3;	
	
	for(i=0; i<4; i++){
		printf("Entre com o numero:\n->");
		scanf("%d",&vet[i]);
	}
	
	printf("\n\nImprimindo: ");
	for(i=0; i<4; i++){
		printf("[%d] ",vet[i]);
	}
	
	printf("\n\nBinario: ");
	for(i=0; i<4; i++){
		vet[i] = vet[i] * pow(2,c);
		c--;
	}
	c = 0;
	for(i=0; i<4; i++){
		printf("[%d] ",vet[i]);
	}
	
	for(i=0; i<4; i++){
		c = c+vet[i];
	}
	
	printf("\n\nFinal: [%d]",c);
}
