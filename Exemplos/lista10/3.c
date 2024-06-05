#include<stdio.h>
#include<stdlib.h>

main(){
	FILE *arq;
	arq = fopen("tmp/palavras.txt","r");
	
	char palavras[100];
	int i;
	
	if(arq == NULL){
		printf("Erro.\n");
		exit(1);
	}
	
	for(i=0; i<100; i++){
		fgets(palavras, 100, (FILE*)arq);
		printf("%s",palavras);
	}
	
	
	
	fclose(arq);
}
