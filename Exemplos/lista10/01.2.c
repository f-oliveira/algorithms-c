#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
		FILE *arq;
	int i,j;
	
	arq = fopen("tmp/teste.txt","r+");
	if(arq == NULL){
		printf("Erro.\n");
		exit(1);
	}
	
	for(j=0; j<100; j++){
		fscanf(arq,"%d",&i);
		
		printf("[%d]: %d:",j,i);
		while(i>0){
			if(i==50){
				//fprintf(arq,"L");
				printf("L");
				i = i-50;
			}
			else if(i>=40 && i<50){
				//fprintf(arq,"XL");
				printf("XL");
				i = i-40;	
			}
			else if(i>=10){
				//fprintf(arq,"X");
				printf("X");
				i = i-10;
			}
			else if(i>=9){
				//fprintf(arq,"IX");
				printf("IX");
				i = i-9;
			}
			else if(i>=5){
				//fprintf(arq,"V");
				printf("V");
				i = i-5;
			}
			else if(i>=4){
				//fprintf(arq,"IV");
				printf("IV");
				i = i-4;
			}
			else if(i>=1){
				printf("I");
				//fprintf(arq,"I");
				i = i-1;
			}
		}
		printf("\n");
	}	
	
	
	fclose(arq);
}
