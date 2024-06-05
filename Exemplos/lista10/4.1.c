#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	srand(time(NULL));
	int i,j;
	FILE *arq;
	
	arq = fopen("tmp/texto.txt","w+");
	
	if(arq == NULL){
		printf("Erro.\n");
		return 0;
	}
	
	for(i=0; i<100; i++){
		fprintf(arq,"%d\n",(rand()%200)-100);
	}
	
	fclose(arq);
	
	
}
