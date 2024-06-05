#include<stdio.h>
#include<locale.h>

int main() {

	FILE *fp;	
	fp = fopen ("./Arquivos/exercicio2", "w+");

	if (fp == NULL) {
		printf("Erro\n");
	}
	
	char texto[255];
	
	fgets(texto, 255, (FILE*)fp);
	printf("2: %s\n", texto);
	
}

