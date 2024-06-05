#include<stdio.h>



int main(void){
	
	int erro=0;
	int acerto=0;
	int verdade=0;
	int controle2;

	int controle;
	char resp;
	char palavra[10];
	int pala;
	int player;
	
	    FILE *arquivo;
	arquivo = fopen("C:/Users/Erick Silva/Desktop/programação extruturada/aula13/forca.txt","r");
		
	fgets(palavra , 10, (FILE*)arquivo);
	printf("%s",palavra);
	
	
	
	do{
		
		printf("Digite uma letra : ");
		scanf("%c",&resp);
		printf("\n%i",resp);
		player = resp;
		pala = palavra[controle];
		controle=0;
		
		do{
			acerto = 0;
			controle2=0;
			do{
				
			
			if (player==pala){
				acerto++;
			printf("\n1 acerto a %iº letra da palavra é %c",controle,resp)	;
				
			}
			controle2++;
		}while(controle2<10);
			if (acerto==0){
				printf("\nA letra digitada nao eh a %i da palavra ",controle);
			
			}
			
			controle++;
		}while(controle<10);
		
		
		if (acerto!=0){
			verdade++;
		}else{
			erro++;
		}
		

	}while (erro<5);
	
	
	
	
	controle=0;
	do{
		
		printf("\n%i  | ", palavra[controle]);
		
		controle++;
	}while (controle<6);
	
	
	
	
	
	
	
	
	
	
	
	
}
