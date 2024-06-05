#include<stdio.h>
#include<locale.h>
#include<math.h>

int main() {
	
	setlocale(LC_ALL, "");

	int i,nv,melhorV;
	float tempo,melhorT,tempoM,tempoT;
	printf("Número de voltas:");
	scanf("%i",&nv);
	
	melhorT = 9999999;
	
	for(i=0;i<nv;i++) {
		
		printf("\nVolta: %d",i+1);
		printf("\nTempo: ");
		scanf("%f",&tempo);
		
		if(tempo < melhorT ){
			melhorT = tempo;
			melhorV = i+1;
		}
		
		tempoT += tempo;
	}
	
	tempoM = tempoT / nv;
	
	printf("\nMelhor tempo: %.2f \nVolta que ocorreu: %i \nTempo médio das voltas: %.2f", melhorT, melhorV, tempoM);
}
