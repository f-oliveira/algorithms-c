#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	srand(time(NULL));
	int i,j;
	FILE *arq;
	
	arq = fopen("tmp/texto.txt","r+");
	
	if(arq == NULL){
		printf("Erro.\n");
		return 0;
	}
	
	int d;
	for(i=0; i<100; i++){
		fscanf(arq,"%d",&d);
		printf("%d->",d);
		if(d>0){
			printf("positivo ");
		}else{
			printf("negativo ");
		}
		if(d%2==0){
			printf("par\n");
		}else{
			printf("impar\n");
		}
	}
	
	fclose(arq);
	
	
}
