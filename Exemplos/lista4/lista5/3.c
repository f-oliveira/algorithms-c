#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

main(){
	srand(time(NULL));
	int vet[4],i,j,c=3,k=0;
	
	for(i=0; i<4;i++){
		vet[i] = rand()%2;
	}
	
	printf("Qual o valor em decimal de: ");
	for(i=0; i<4; i++){
		printf("%d",vet[i]);
	}
	for(i=0; i<4; i++){
		vet[i] = vet[i] * pow(2,c);
		c--;
	}
	c = 0;
	for(i=0; i<4; i++){
		c = c+vet[i];
	}
	
	printf("\n->",c);
	while(j!=c){
		scanf("%d",&j);
		printf("Tentativa [%d]\n",k+1);
		if(j!=c){
			printf("Errado.\n");
			k++;
		}
	}
	
	printf("Acertou.");
}
