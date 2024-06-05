#include <stdio.h>
int main(){
	FILE *fp;
	char texto[255];
	int imagem[400][400][3];
	int linha, coluna, max;
	
	fp = fopen("./Arquivos/exercicio5.ppm", "r");
	
	if(fp == NULL){
		printf("Erro.\n");
	}
	printf("Iniciando...\n");
	
	fgets(texto, 255, (FILE*)fp);
	printf("%s", texto);
	fgets(texto, 255, (FILE*)fp);
	printf("%s", texto);
	fscanf(fp, "%d %d", &linha, &coluna);
	printf("Linhas: %d. Colunas: %d\n", linha, coluna);
	fscanf(fp, "%d", &max);
	printf("Max: %d\n", max);
	
	int i, j, k;
	for(i=0; i<400; i++){
		for(j=0; j<400; j++){
			for(k=0; k<3; k++){
				fscanf(fp, "%d", &imagem[i][j][k]);
				printf("%d ", imagem[i][j][k]);
			}
		}
	}
	fclose(fp);
}
