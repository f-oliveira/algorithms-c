#include<stdio.h>
#include<stdlib.h>
#include<time.h>


main(){
	srand(time(NULL));
	int max,min, i;
	int vet[10];
	
	for(i=0; i<10; i++){
		vet[i] = rand()%100;
		printf("%d ",vet[i]);
	}
	
	max = vet[0];
	min = vet[0];
	
	for(i=0; i<10; i++){
		if(vet[i] > max){
			max = vet[i];
		}
		
		else if(vet[i] < min){
			min = vet[i];
		}
	}
	
	printf("\nMax: %d\nMin: %d",max,min);
}

