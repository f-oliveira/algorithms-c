#include<stdio.h>
#include<locale.h>

int main() {

	FILE *fp;	
	fp = fopen ("./Arquivos/exercicio3", "w+");

	int num;
	
	if (fp == NULL) {
		printf("Erro\n");
	}
	
	fprintf(fp," \nDigite um número: \n");
	
	do  {
		
	scanf("%i",&num);
	fprintf(fp,"%i ",num);

	if (num > 0){
			fprintf(fp," O numero é positivo e ");
	}else{
		fprintf(fp," O numero é negativo e ");
	}
	
	if (num % 2 == 0){
		fprintf(fp," par ");
	}else{
		fprintf(fp," impar ");
	}
	
	fprintf(fp,"\n");
	
} while (num != 0);

	
	fclose(fp);
	
	
}
