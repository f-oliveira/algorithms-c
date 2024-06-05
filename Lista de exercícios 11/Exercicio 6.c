#include <stdio.h>
int main(){
	FILE *fp;//criar um ponteiro para apontar p/ o arquivo
	char texto[255];
	int imagem[400][400][3];
	int linha, coluna, max;
	
	fp = fopen("./Arquivos/imagem.ppm", "r");//abre como leitura
	
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
			for(k=0; k<3; k++){
				fscanf(fp, "%d", &imagem[i][j][k]);
			}
		}
	}
	
	//criando imagens
	
	FILE *fp2;
	fp2 = fopen("./Arquivos/exercicio6.ppm", "w+");
	fprintf(fp2, "P3\n");
	fprintf(fp2, "#Criado por Andre\n");
	fprintf(fp2, "%d %d\n", linha, coluna);
	fprintf(fp2, "255\n");
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			for(k=0; k<3; k++){
				fprintf(fp2, "%d ", imagem[i][j][k]);
			}
		}
	}
	
	FILE *fp3;
	fp3 = fopen("./Arquivos/exercicio6a.ppm", "w+");
	fprintf(fp3, "P3\n");
	fprintf(fp3, "#Criado por Andre\n");
	fprintf(fp3, "%d %d\n", linha, coluna);
	fprintf(fp3, "255\n");
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			//for(k=0; k<3; k++){
				
				
				fprintf(fp3, "%d ", imagem[i][j][2]);
				fprintf(fp3, "%d ", imagem[i][j][1]);
				fprintf(fp3, "%d ", imagem[i][j][0]);
			//}
		}
	}
	
	// 3º imagem
	FILE *fp4;
	fp4 = fopen("./Arquivos/exercicio6b.ppm", "w+");
	fprintf(fp4, "P3\n");
	fprintf(fp4, "#Criado por Andre\n");
	fprintf(fp4, "%d %d\n", linha, coluna);
	fprintf(fp4, "255\n");
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			//for(k=0; k<3; k++){
				fprintf(fp4, "%d ", imagem[i][j][1]);
				fprintf(fp4, "%d ", imagem[i][j][2]);
				fprintf(fp4, "%d ", imagem[i][j][0]);
			//}
		}
	}
	
	FILE *fp5;
	fp5 = fopen("./Arquivos/exercicio6c.ppm", "w+");
	fprintf(fp5, "P3\n");
	fprintf(fp5, "#Criado por Andre\n");
	fprintf(fp5, "%d %d\n", linha, coluna);
	fprintf(fp5, "255\n");
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			//for(k=0; k<3; k++){
				fprintf(fp5, "%d ", imagem[i][j][1]);
				fprintf(fp5, "%d ", imagem[i][j][0]);
				fprintf(fp5, "%d ", imagem[i][j][2]);
			//}
		}
	}
		
	//fecha o arquivo
	fclose(fp5);
	fclose(fp4);
	fclose(fp3);
	fclose(fp2);
	fclose(fp);
}
