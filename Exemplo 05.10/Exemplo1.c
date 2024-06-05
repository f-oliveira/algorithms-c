#include<stdio.h>

int main () {
	FILE *fp;
	fp = fopen("C:/Users/Felipe/Desktop/Faculdade/Faculdade/2° Semestre/C/Exemplo 05.10/tmp/teste.txt","w+");
	
	if (fp == NULL){
		printf("Erroo.\n");
	}
	
	fprintf(fp, "Escrevendo em arquivo com fprintf.\n");
	
	fputs("Escrevendo em arquivo com fputs.\n", fp);
	
	int n1,n2;
	
	n1 = 10;
	n2= 15;
	
	fprintf(fp,"%d %d \n", n1, n2);
	
	char texto[11] = "informatica";
	fputs(texto, fp);
	
	int i;
	for (i=0;i<100;i++){
		if (i%10== 0){
			fprintf(fp, "\n");
		}
		
		fprintf(fp, "%d, ", i);
	}
	
	int v[100];
	
	for(i=0;i<100;i++){
		v[100] = i;
	}
	
	for(i=0;i<100;i++){
		if (i%10== 0){
			fprintf(fp, "\n");
		}
		
	fprintf(fp, v[i])	;
	}
	
	
	
	fclose(fp);
}
