#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	FILE *arq;
	FILE *fp;
	arq = fopen("tmp/img.ppm","r+");
	fp = fopen("tmp/img04.ppm","w+");
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
				fscanf(arq,"%d ",&mat[i][j][k]);
			}
		}
	}
	
	printf("%d",(int)sqrt((200)*(200)));
	//IMRPIMINDO
	int circulo=1;	int bol = 0;
	
	for(i=0; i<400; i++){
		for(j=0; j<400; j++){
			if(sqrt(((200-i)*(200-i)) + ((200-j))*(200-j)) <= 200){
				int kx = mat[i][j][0] + mat[i][j][1] + mat[i][j][2];
				kx = kx/3;
				fprintf(fp,"%d %d %d\n",kx,kx,kx);
			}
			else{
				for(k=0; k<3; k++){
					fprintf(fp,"%d ",mat[i][j][k]);
				}
				fprintf(fp,"\n");
			}
			
		}
	}	
	
	fclose(arq);
	fclose(fp);
}
