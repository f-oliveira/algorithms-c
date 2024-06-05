#include<stdio.h>
#include<stdlib.h>

main(){
	FILE *arq;
	FILE *fp;
	arq = fopen("tmp/jake.ppm","r+");
	fp = fopen("tmp/jeiki.ppm","w+");
	int mat[100][100][3];
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
	fprintf(fp,"300 200 \n255\n");
	
	int i,j,k;
	
	for(i=0;i<l; i++){
		for(j=0; j<c; j++){
			for(k=0; k<3; k++){
				fscanf(arq,"%d ",&mat[i][j][k]);
			}
		}
	}
	
	
	//IMRPIMINDO
	
	for(i=0; i<100; i++){
		for(j=0; j<100; j++){
			fprintf(fp, "%d %d %d\n", mat[i][j][2], mat[i][j][1], mat[i][j][0]);
		}
		
		for(j=100; j<200; j++){
			fprintf(fp, "%d %d %d\n", mat[i][j-100][0], mat[i][j-100][2], mat[i][j-100][1]);
		}
		
		for(j=200; j<300; j++){
			fprintf(fp, "%d %d %d\n", mat[i][j-200][1], mat[i][j-200][0], mat[i][j-200][2]);
		}
	}
	
	for(i=100; i<200; i++){
		for(j=0; j<100; j++){
			fprintf(fp, "%d %d %d\n", mat[i-100][j][1], mat[i-100][j][2], mat[i-100][j][0]);
		}
		
		for(j=100; j<200; j++){
			fprintf(fp, "%d %d %d\n", mat[i-100][j-100][1], mat[i-100][j-100][0], mat[i-100][j-100][1]);
		}
		
		for(j=100; j<200; j++){
			fprintf(fp, "%d %d %d\n", mat[i-100][j-200][2], mat[i-100][j-200][0], mat[i-100][j-200][1]);
		}
		
	}
	
	
	
	
	fclose(arq);
	fclose(fp);
}
