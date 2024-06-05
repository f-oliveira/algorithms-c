#include<stdio.h>
#include<stdlib.h>

main(){
	FILE *arq;
	FILE *fp1, *fp2, *fp3;
	arq = fopen("tmp/img.ppm","r+");
	fp1 = fopen("tmp/imgRGB.ppm","w+");
	fp2 = fopen("tmp/imgBGR.ppm","w+");
	fp3 = fopen("tmp/imgGRB.ppm","w+");
	
	int mat[400][400][3];
	char txt[200];
	int lol;
	
	if(arq == NULL){
		printf("Erro.\n");
		exit(1);
	}
	fgets(txt,200,(FILE*)arq);
	fprintf(fp1,"%s",txt);
	fprintf(fp2,"%s",txt);
	fprintf(fp3,"%s",txt);
	fgets(txt,200,(FILE*)arq);
	fprintf(fp1,"%s",txt);
	fprintf(fp2,"%s",txt);
	fprintf(fp3,"%s",txt);
	
	int l,c;
	fscanf(arq,"%d %d %d",&l,&c,&lol);
	fprintf(fp1,"%d %d\n%d\n",l,c,lol);
	fprintf(fp2,"%d %d\n%d\n",l,c,lol);
	fprintf(fp3,"%d %d\n%d\n",l,c,lol);
	
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
	//BGR
	for(i=0;i<l; i++){
		for(j=0; j<c; j++){
			//for(k=0; k<3; k++){
				fprintf(fp1,"%d %d %d",mat[i][j][2], mat[i][j][1], mat[i][j][0]);
			//}
			fprintf(fp1,"\n");
		}
	}
	//GBR
	for(i=0;i<l; i++){
		for(j=0; j<c; j++){
			//for(k=0; k<3; k++){
				fprintf(fp2,"%d %d %d",mat[i][j][1], mat[i][j][2], mat[i][j][0]);
			//}
			fprintf(fp2,"\n");
		}
	}
	//GRB                RGB
	for(i=0;i<l; i++){
		for(j=0; j<c; j++){
			//for(k=0; k<3; k++){
				fprintf(fp3,"%d %d %d",mat[i][j][1], mat[i][j][0], mat[i][j][2]);
			//}
			fprintf(fp3,"\n");
		}
	}
	
	fclose(fp1); fclose(fp2); fclose(fp3);
}
