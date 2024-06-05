#include<stdio.h>
#include<locale.h>

int main() {

	FILE *fp;	
	fp = fopen ("./Arquivos/exercicio6", "w+");

	
	if (fp == NULL) {
		printf("Erro\n");
	}
	
	int matriz[10][10];
	int i,j;
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			
			fprintf(fp,"|");
			matriz[i][j] = rand()%89+10;
			fprintf(fp," %i |",matriz[i][j]);
		}
	
	}	
	
fclose(fp);

}
