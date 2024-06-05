#include<stdio.h>
#include<locale.h>

int main() {

	FILE *fp;	
	fp = fopen ("./Arquivos/exercicio4.txt", "w+");

	if (fp == NULL) {
		printf("Erro\n");
	}

	int i,n,j,p[100];

	srand(time(NULL));
	
	for(i=0;i<100;i++){
		j = rand()%2;
		if (j == 1){
		n = rand()%100*-1;	 
		
		}else {
		n = rand()%100;	
		}
		
		
		fprintf(fp, "%d\n", n);	
	}
	
	fclose(fp);
	
	fp = fopen ("./Arquivos/exercicio4", "r");
	
	if (fp == NULL) {
		printf("Erro\n");
	}
	
	for(i=0;i<100;i++){
		
		fscanf(fp, "%d", &p[i]);
		printf("%d ", p[i]);
		if (p[i]%2==0) {
			
			printf("par\n");
			
		} else{ 
				printf("impar\n");
			}
	}
	
fclose(fp);
}

