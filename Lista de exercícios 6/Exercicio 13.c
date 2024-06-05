#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	
	srand(time(NULL));
	int v1[5],v2[8],v3[5];
	int c=0;
	
	int i,j,k;
	
	for(i=0; i<5; i++){
		v1[i] = (rand()%30) + 1;
		v2[i] = (rand()%30) + 1;
		v3[i] = -1;
	}
	
	for(i=5; i<8 ;i++){
		v2[i] = (rand()%30) + 1;
	}
	
	printf("Vetor 1: ");
	for(i=0; i<5; i++){
		printf("%d ",v1[i]);
	}
	
	
	printf("\nVetor 2: ");
	for(i=0; i<8; i++){
		printf("%d ",v2[i]);
	}
	
	printf("\n");
	
	for(i=0; i<5; i++){
		for(j=0; j<8; j++){
			if(v1[i] == v2[j]){
				
				for(k=0; k<8; k++){
					if(v1[i] == v2[k]){
						v2[k] = 0;
					}
				}
				
				v3[c] = v1[i];
				c++;
			}
		}
	}
	printf("Elementos em comum: ");
	for(i=0 ;i<5; i++){
		if(v3[i] != -1){
			printf("%d ",v3[i]);
		}
	}
}
