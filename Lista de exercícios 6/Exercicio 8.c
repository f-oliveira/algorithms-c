#include<stdio.h>
#include<locale.h>
#include<math.h>

int main (){
	
	setlocale(LC_ALL, "");
	
	int i,j;
	int vet[10],aux1,aux2;
	float media=0;
	
	printf("Insira 10 números: \n ");
	
	aux1 = -999999;
	aux2 = 999999;
	
	for(i=0; i<10; i++){
		
		scanf("%d", &vet[i]);
		media += (float)vet[i];
		
		if (vet[i] > aux1) {
			
			aux1 = vet[i];
			
		} 
		
		if (vet[i] < aux2) {
		
			aux2 = vet[i];
		}
	}
	
	
	
	
	
	
	printf("Maior: %d \nMenor: %d\nMedia: %.2f",aux1, aux2,media/10.0);
	
		
}
