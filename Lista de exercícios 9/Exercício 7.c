#include<stdio.h>
#include<locale.h>

int main() {

	FILE *fp;	
	fp = fopen ("./Arquivos/exercicio7.pbm", "w+");

	
	if (fp == NULL) {
		printf("Erro\n");
	}
	
	int matriz[100][100];
	int i,j;
	
	fprintf(fp,"P1\n");
	fprintf(fp,"#imagem.pbm\n");
	fprintf(fp,"100 100\n");
	
	for(i=0;i<100;i++){
		for(j=0;j<100;j++){
			
			matriz[i][j]=rand()%2;
			fprintf(fp,"%i ",matriz[i][j]);

		}
	
	}	
	
	
fclose(fp);

}
