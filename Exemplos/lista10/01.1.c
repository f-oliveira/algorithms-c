#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	srand(time(NULL));
	
	FILE *arq;
	int i;
	
	arq = fopen("tmp/teste.txt","w+");
	if(arq == NULL){
		printf("Erro.\n");
		exit(1);
	}
	
	for(i=0; i<100; i++){
		fprintf(arq,"%d ",(rand()%50)+1);
	}	
	
	
	fclose(arq);
	
	
}
