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
	int esc;
	printf("[1] Direita || [2] Esquerda");
	scanf("%d",&esc);
	if(esc == 1){
		for(j=0;j<c; j++){
			for(i=0; i<l; i++){
				for(k=0; k<3; k++){
					fprintf(fp,"%d ",mat[i][j][k]);
				}
				fprintf(fp,"\n");
			}
		}
	}
	
	else{
		for(j=0;j<c; j++){
			for(i=l-1; i>=0; i--){
				for(k=0; k<3; k++){
					fprintf(fp,"%d ",mat[i][j][k]);
				}
				fprintf(fp,"\n");
			}
		}
	}
	
	
	
	
	/*for(i=l-1;i>=0; i--){
		for(j=0; j<c; j++){
			for(k=0; k<3; k++){
				fprintf(fp,"%d ",mat[i][j][k]);
			}
			fprintf(fp,"\n");
		}
	}*/
	fclose(fp);
}
