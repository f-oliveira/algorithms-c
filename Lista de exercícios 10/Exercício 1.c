#include<stdio.h>
#include<locale.h>

int main() {
	
	int a,i;
	char n[100];
	
	int num,aux,uni,dez;
	char d[][9] = {"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
	char u[][9] = {"I","II","III","IV","V","VI","VII","VIII","IX"};

	FILE *fp;	
	fp = fopen ("./Arquivos/exercicio1.txt", "w+");

	if (fp == NULL) {
		printf("Erro\n");
	}
	

	
	srand(time(NULL));
	for(i=1;i<100;i++){
		
		n[i] = rand()%49 + 1;	
		fprintf(fp,"%d\n",n[i]);
		
	}
	
	fclose(fp);
	
	fp = fopen ("./Arquivos/exercicio1", "r");
	if(fp == NULL){
		printf("Erro.\n");
	}

	for(i=1;i<100;i++){
		
		fscanf(fp, "%d", &n[i]);
		
		
		uni = n[i] % 10;
		aux = n[i]/10;
		dez = aux % 10;
		aux = aux/10;
	
	
		if (n[i] <= 9) {
			
			printf("%d", n[i]);	
			printf(": %s \n",u[uni-1]);
		}

		if (n[i] >= 10  ) {
		
			printf("%d", n[i]);
			printf(": %s%s\n",d[dez-1],u[uni-1]);
		}
	
	}
	
	fclose(fp);
}
