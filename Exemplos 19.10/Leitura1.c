#include<stdio.h>

int main () {
	FILE *fp;
	char texto[255];
	
	
	
	fp = fopen("./teste.txt", "r"); // abre como leitura
	
	//confere se op arquivo foi aberto
	if(fp == NULL){
		printf("Erro.\n");
	}
	
	//ler o conteudo do arquivo com fscanf
	fscanf(fp, "%s", texto);
	printf("1: %s\n", texto);
	
	//ler conteudo do arquivo com fgets
	fgets(texto, 255, (FILE*)fp);
	printf("2: %s\n", texto);
	
	//fecha o arquivo
	fclose(fp);
}
