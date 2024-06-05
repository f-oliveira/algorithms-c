#include<stdio.h>
#include<stdlib.h>

main(){
	FILE *arq;
	arq = fopen("tmp/bresil.txt","r");
	char estados[100];
	if(arq == NULL){
		printf("Erro.\n");
		exit(1);
	}
	
	while(fgets(estados, 100, (FILE*)arq) != 0){
		printf("%s",estados);
	}
	
	
	
	fclose(arq);
}
