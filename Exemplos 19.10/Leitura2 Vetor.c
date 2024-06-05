#include<stdio.h>

int main () {
	
	FILE *fp;
	char texto[255];
	int vetor[10];
	
	//Quando eu estiver na mesma pasta nao precisa de indicar
	
	fp = fopen("./numero.txt", "r"); // abre como leitura
	
	//confere se op arquivo foi aberto
	if(fp == NULL){
		printf("Erro.\n");
	}
	
	
	//ler o conteudo do arquivo com fscanf
	int i;
	for(i=0;i<10;i++){
		fscanf(fp, "%d", &vetor[i]);
	}
	
	//imprimir o conteudo na tela
	for (i=0;i<10;i++){
		printf("%d: %d\n", i, vetor[i]*2);
	}	

	//fecha o arquivo
	fclose(fp);
}
