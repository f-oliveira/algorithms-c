#include<stdio.h>
#include<locale.h>

int main() {

	FILE *fp;	
	fp = fopen ("./Arquivos/exercicio8.pgm", "w+");

	if (fp == NULL) {
		printf("Erro\n");
	}
	
	int matriz[100][100];
	int i,j;
	
	fprintf(fp,"P2\n");
	fprintf(fp,"#imagem2.pgm\n");
	fprintf(fp,"100 100\n");
	fprintf(fp,"255\n");
	
	srand(time(NULL));
	
	for(i=0;i<100;i++){
		for(j=0;j<100;j++){
			
			matriz[i][j]=rand()%255;
			fprintf(fp,"%i",matriz[i][j]);
			fprintf(fp," ");

		}
		fprintf(fp,"\n");
	
	}		
	
	
fclose(fp);

}
