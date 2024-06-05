#include<stdio.h>
#include<locale.h>

int main() {

	FILE *fp;	
	fp = fopen ("./Arquivos/exercicio2", "w+");

	if (fp == NULL) {
		printf("Erro\n");
	}

	int i,n,j;

	srand(time(NULL));
	
	for(i=0;i<50;i++){
		j = rand()%2;
		if (j == 1){
		n = rand()%100*-1;	 
		
		}else {
		n = rand()%100;	
		}
		
		
		fprintf(fp, "%d, ", n);	
	}
	
}

