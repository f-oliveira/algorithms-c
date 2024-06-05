#include<stdio.h>
#include<locale.h>

int main() {

	FILE *fp;	
	fp = fopen ("./Arquivos/exercicio5", "w+");

	
	if (fp == NULL) {
		printf("Erro\n");
	}
	
	int prim,seg,terc,controle,controle2,controle3,alea;
	
	prim = rand()%20+1;
	controle=0;
	do {
		
		seg = rand()%16+5;
		controle2=0;
		do{
			
			int linha;
			terc = rand()%15+1;
			controle3 = 0;
			
			do{
				
				alea = rand()%26+97;
				linha = alea;
				fprintf(fp,"%c",linha);
				
				controle3++;
				
			}while(controle3!=terc);
			
			fprintf(fp,"    ");
			
			
			controle2++;
		}while(controle2!=seg);
		fprintf(fp,"\n");
		
		controle++;
	}while(controle!=prim);
	
fclose(fp);

}
