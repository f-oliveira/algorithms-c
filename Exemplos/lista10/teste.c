#include<stdio.h>
#include<stdlib.h>

main(){
	FILE *fp;
	char texto[255];
	
	fp = fopen("tmp/teste.txt","r");
	if(fp == NULL){
		printf("Erro.\n");
		exit(1);
	}
	
	//Ler conteúdo do arquivo com fscanf
	fscanf(fp,"%[^\n]%*c",texto);
		printf("1: %s\n",texto);
	
	
	//Ler conteúdo do arquivo com gets
	fgets(texto, 255, (FILE*)fp);
	printf("2: %s\n",texto);
	
	fclose(fp);}
