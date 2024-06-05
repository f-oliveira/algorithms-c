#include<stdio.h>
#include<stdlib.h>

main(){
	int i,j;
	int vet[10];
	float media=0;
	
	for(i=0; i<10; i++){
		scanf("%d",&vet[i]);
	}
	
	for(i=0; i<10; i++){
		media = media + (float)vet[i];
	}
	
	for(i=0; i<10; i++){
		for(j=i+1; j<10; j++){
			int aux;
			if(vet[i]>vet[j]){
				aux = vet[i];
				vet[i] = vet[j];
				vet[j]=aux;
			}
		}
	}
	
	printf("Maior: %d \nMenor: %d\nMedia: %.2f",vet[9], vet[0],media/10.0);
	

	
	
}
