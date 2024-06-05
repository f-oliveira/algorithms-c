#include <stdio.h>
int main(){
	FILE *fp;//criar um ponteiro para apontar p/ o arquivo
	char texto[255];
	int imagem[400][400][3];
	int linha, coluna, max;
	
	fp = fopen("./Arquivos/exercicio5.ppm", "r");//abre como leitura
	
	//confere se o arquivo foi aberto
	if(fp == NULL){
		printf("Erro.\n");
	}
	printf("Iniciando...\n");
	
	//ler conteúdo do arquivo com fscanf
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
			for(k=0;k<3;k++){
				fscanf(fp, "%d", &imagem[i][j][k]);
			}	
		
		}
	}
	
	FILE *fp2;
	fp2 = fopen("./Arquivos/exercicio6.pgm", "w+");
	fprintf(fp2, "P2\n");
	fprintf(fp2, "#Criado por Andre\n");
	fprintf(fp2, "%d %d\n", linha, coluna);
	fprintf(fp2, "255\n");
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
				fprintf(fp2, "%d ", (imagem[i][j][0]+imagem[i][j][1]+imagem[i][j][2])/3);
			
		}
	}
		
	//fecha o arquivo
	fclose(fp2);
	fclose(fp);
}

