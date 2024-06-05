#include<stdio.h>
#include<locale.h>

int main() {

	FILE *fp;	
	fp = fopen ("./Arquivos/exercicio2", "w+");

	if (fp == NULL) {
		printf("Erro\n");
	}
	
	int a,i;
	
	for(i=1;i<100;i++){
		
		fprintf(fp,"%i ,",i);
		if (i%10==0){
			fprintf(fp,"\n");
		}
	}
	fclose(fp);
	
	
}
