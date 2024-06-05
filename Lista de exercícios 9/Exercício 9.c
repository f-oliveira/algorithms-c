#include<stdio.h>
#include<locale.h>

int main() {

	FILE *fp;	
	fp = fopen ("./Arquivos/exercicio9.ppm", "w+");

	
	if (fp == NULL) {
		printf("Erro\n");
	}
	
	int matriz[100][300];
	int i,j;
	
	fprintf(fp,"P3\n");
	fprintf(fp,"#imagem3.ppm\n");
	fprintf(fp,"100 100\n");
	fprintf(fp,"255\n");
	
	srand(time(NULL));
	
	for(i=0;i<=100;i++){
		for(j=0;j<=300;j++){
			
			matriz[i][j]=rand()%256;
			fprintf(fp,"%i",matriz[i][j]);
			fprintf(fp," ");

		}
		fprintf(fp,"\n");
	
	}		
	
	
fclose(fp);

}
