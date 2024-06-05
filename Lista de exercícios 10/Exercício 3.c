#include<stdio.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL,"");
	
	FILE *fp;	
	fp = fopen ("./Arquivos/exercicio3.txt", "r");

	if (fp == NULL) {
		printf("Erro\n");
	}
	
	char texto[255];
	int i;
	
	for(i=0;i<100;i++){
		fgets(texto, 255, (FILE*)fp);
		printf("%s\n", texto);
	
	}	
	
	fclose(fp);
}
