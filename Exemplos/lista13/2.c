#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

main(){
	srand(time(NULL));
	FILE *fp;
	//FILE *arq;
	
	fp = fopen("lol2.txt","r");
	//arq = fopen("lol2.txt","w+");
	int cont = (rand()%139)+1;
	char buff[200];
	
	int cont2 = 0;
	
	while(fgets(buff,200,fp)){
		/*for(i=0; i<strlen(buff); i++){
			if(buff[i] >=65 && buff[i] <=90){
				fprintf(arq,"%c",buff[i]+32);
			}
			else{
				fprintf(arq,"%c",buff[i]);
			}
		}*/
		cont2++;
		if(cont2 == cont){
			break;
		}
	}
	int itero = strlen(buff);
	itero = itero-1;
	int acertos = itero;
	printf("Buffer = %s strlen = %d\n\n",buff,itero);
	char palavra[itero];
	char roro[itero];
	int i;
	for(i=0; i<itero;i++){
		palavra[i] = buff[i];
		if(palavra[i]>=97 && palavra[i]<=122){
			roro[i] = '_';	
		}else{
			roro[i] = buff[i];
			acertos--;
		}
	}
	
	int tentativas=7;
	
	for(;;){
		
		printf("Voce tem [%d] tentativas\n",tentativas);
		for(i=0; i<itero; i++){
			printf("%c ",roro[i]);
		}
		printf("\n");
		//for(i=0; i<itero; i++){
		//	printf("%c ",palavra[i]);
		//}
		printf("\nEntre com uma letra:\n->");
		char letra;
		fflush(stdin);
		scanf("%c",&letra);
		
		int conti = itero;
		for(i=0 ;i<itero; i++){
			if(palavra[i] == letra){
				conti++;
				if(roro[i] == '_'){
					roro[i] = letra;
					acertos--;
				}
			}
		}
		if(conti == itero){
			tentativas--;
		}
		if(tentativas == 0){
			printf("Fim de jogo. A palavra era %s. Voce perdeu.",buff);
			return 0;
		}
		if(acertos == 0){
			printf("Fim de jogo. A palavra era %s. Voce venceu.",buff);
			return 0;
		}
		system("cls");
		
	}
	
	fclose(fp);
	//fclose(arq);
}
