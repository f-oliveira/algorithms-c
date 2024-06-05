#include<stdio.h>
#include<stdlib.h>

main(){
	int numVoltas,tempo;
	int melhorTempo=0, melhorVolta=0, tMedio=0;
	int i;
	float resultMedio;
	
	printf("Entre com o numero N de voltas:\n->");
	scanf("%d",&numVoltas);
	
	printf("[Volta 1]\nEntre com tempo: ");
	scanf("%d",&tempo);
	melhorTempo = tempo;
	melhorVolta = 1;
	tMedio = tMedio + tempo;
		
	for(i=1; i<numVoltas; i++){
		printf("[Volta %d]",i+1);
		printf("\nEntre com o tempo: ");
		scanf("%d",&tempo);
		
		tMedio = tMedio + tempo;
		if(tempo < melhorTempo){
			melhorTempo = tempo;
			melhorVolta = i+1;
		}
	}
	
	resultMedio = (float)tMedio / numVoltas;
	
	printf("\n\n\nMelhor tempo: %d\nMelhor volta: %d\nTempo Medio: %.2f",melhorTempo, melhorVolta,resultMedio);
}
