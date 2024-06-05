#include <stdio.h>
int main(){
	FILE *fp;//criar um ponteiro para apontar p/ o arquivo
	char texto[255];
	int imagem[400][400][3];
	int linha, coluna, max;
	
	fp = fopen("./Arquivos/frutas400x400.ppm", "r");//abre como leitura
	
	//confere se o arquivo foi aberto
	if(fp == NULL){
		printf("Erro.\n");
	}
	printf("Iniciando...\n");
	
	//ler conte�do do arquivo com fscanf
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
			}
		}
	}
	
	FILE *fp2;
	fp2 = fopen("./Arquivos/frutas400x400espelhada.ppm", "w+");
	fprintf(fp2, "P3\n");
	fprintf(fp2, "#Criado por Andre\n");
	fprintf(fp2, "%d %d\n", linha, coluna);
	fprintf(fp2, "255\n");
	for(i=0; i<linha; i++){
		for(j=399; j>-1; j--){
			for(k=0; k<3; k++){
				fprintf(fp2, "%d ", imagem[i][j][k]);
			}
		}
	}
		
	//fecha o arquivo
	fclose(fp2);
	fclose(fp);
}
