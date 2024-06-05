#include<stdio.h>
#include<stdlib.h>

main(){
	FILE *arq;
	FILE *fp;
	arq = fopen("tmp/img.ppm","r+");
	fp = fopen("tmp/img2.pgm","w+");
	
	int mat[400][400][3];
	char txt[200];
	
	
	if(arq == NULL){
		printf("Erro.\n");
		exit(1);
	}
	if(fp == NULL){
		printf("Erro.\n");
		exit(1);
	}
	fgets(txt,200,(FILE*)arq);
	printf("Tipo de img: %s",txt);
	fgets(txt,200,(FILE*)arq);
	printf("Texto do Arquivo: %s",txt);
	
	fprintf(fp,"P2\n");
	fprintf(fp,"400 400\n");
	fprintf(fp,"128\n");
	int l,c;
	fscanf(arq,"%d %d",&l,&c);
	printf("Linhas = %d Colunas = %d",l,c);
	
	int i,j,k;
	for(i=0;i<l; i++){
		for(j=0; j<c; j++){
			for(k=0; k<3; k++){
				fscanf(arq,"%d",&mat[i][j][k]);
			}
		}
	}
	
	printf("\n\n\nImprimindo:\n");
	
	for(i=0;i<l; i++){
		for(j=0; j<c; j++){
			int valor = mat[i][j][0] + mat[i][j][1] + mat[i][j][2];
			fprintf(fp,"%d\n",valor/3);
		}
	}
	fclose(arq);
}
