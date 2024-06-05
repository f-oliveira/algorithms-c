#include<stdio.h>
#include<stdlib.h>

main(){
	FILE *arq;
	FILE *fp;
	arq = fopen("tmp/img.ppm","r+");
	fp = fopen("tmp/img00.ppm","w+");
	int mat[400][400][3];
	char txt[200];
	int lol;
	
	if(arq == NULL){
		printf("Erro.\n");
		exit(1);
	}
	fgets(txt,200,(FILE*)arq);
	fprintf(fp,"%s",txt);
	fgets(txt,200,(FILE*)arq);
	fprintf(fp,"%s",txt);
	
	int l,c;
	fscanf(arq,"%d %d %d",&l,&c,&lol);
	fprintf(fp,"%d %d\n%d\n",l,c,lol);
	
	int i,j,k;
	for(i=0;i<l; i++){
		for(j=0; j<c; j++){
			for(k=0; k<3; k++){
				fscanf(arq,"%d",&mat[i][j][k]);
			}
		}
	}
	
	fclose(arq);
	
	
	printf("\n\n\nImprimindo:\n");
	/*
	for(i=0;i<l; i++){
		for(j=0; j<c; j++){
			for(k=0; k<3; k++){
				fprintf(fp,"%d ",mat[i][j][k]);
			}
			fprintf(fp,"\n");
		}
	}
	*/
	
	for(i=0;i<l; i++){
		for(j=c-1; j>=0; j--){
			for(k=0; k<3; k++){
				fprintf(fp,"%d ",mat[i][j][k]);
			}
			fprintf(fp,"\n");
		}
	}
	fclose(fp);
}
