#include<stdio.h>
#include<time.h>
#include<locale.h>


int main(void){
	
	setlocale(LC_ALL,"");
	
	srand(time(0));
	
	int num;
	int a;
	int b;
	int resp;
	int opcao;
	int erros;
	int acerto;
	int pc;
	double ok;
	double resp1;
	
	erros = 0;
	acerto = 0;
	
	printf("Escolha um nível de dificuldade : ");
	printf("\n1 - Fácil\n2 - Mediano\n3 - Difícil\n");
	scanf("%i",&opcao);
	
	
	if (opcao==1){
		printf("\n\nVoce pode errar 5 vezes");
		do{
			num = rand()%3;
			a = rand()%10;
			b = rand()%10;
			if(num==0){
				printf("\n%i + %i = ",a,b);
				scanf("%i",&resp);
				pc = a + b;
				if(resp==pc){
					acerto = acerto + 1;
					erros = erros + 0 ;
					printf("\nVoce acertou !\n");
				}else{
					erros = erros + 1;
					printf("Voce errou !\nErros = %i\n",erros);
				}
				
				
			}
				if(num==1){
				printf("\n%i - %i = ",a,b);
				scanf("%i",&resp);
				pc = a - b;
				if(resp==pc){
					acerto = acerto + 1 ; 
					erros = erros + 0 ;
					printf("\nVoce acertou !\n");
				}else{
					erros = erros+1;
					printf("Voce errou !\nErros = %i\n",erros);
				}
				
				
			}
				if(num==2){
				printf("\n%i x %i = ",a,b);
				scanf("%i",&resp);
				pc = a * b;
				if(resp==pc){
					acerto = acerto + 1;
					erros = erros + 0;
					printf("Voce acertou !\n");
				}else{
					erros = erros+1;
					printf("Voce errou !\nErros = %i\n",erros);
				}
				
				
			}
			
			
			
		}while((erros!=5)||(acerto==100));
		printf("Acertos = %i\n\n",acerto);
		printf("Acabou\n");
		system("pause");
		
		}
		if (opcao==2){
		printf("\n\nVoce pode errar 4 vezes");
		do{
			num = rand()%3;
			a = rand()%200-100;
			b = rand()%200-100;
			if(num==0){
				printf("\n%i + %i = ",a,b);
				scanf("%i",&resp);
				pc = a + b;
				if(resp==pc){
					acerto = acerto + 1;
					erros = erros + 0 ;
					printf("Voce acertou !\n");
				}else{
					erros = erros + 1;
					printf("Voce errou !\nErros = %i\n",erros);
				}
			}
			if(num==1){
				printf("\n%i - %i = ",a,b);
				scanf("%i",&resp);
				pc = a - b;
				if(resp==pc){
					acerto = acerto + 1 ; 
					erros = erros + 0 ;
					printf("Voce acertou !\n");
				}else{
					erros = erros+1;
					printf("Voce errou !\nErros = %i\n",erros);
				}
				
				
			}
				if(num==2){
				printf("\n%i x %i = ",a,b);
				scanf("%i",&resp);
				pc = a * b;
				if(resp==pc){
					acerto = acerto + 1;
					erros = erros + 0;
					printf("Voce acertou !\n");
				}else{
					erros = erros+1;
					printf("Voce errou !\nErros = %i\n",erros);
				}
				
				
			}
			
			
			
		}while((erros!=4)||(acerto==30));
		printf("Acertos = %i\n\n",acerto);
		printf("Acabou\n");
		system("pause");
		
	}
	if (opcao==3){
		printf("\n\nVoce pode errar 3 vezes");
		do{
			num = rand()%3;
			a = rand()%2000-1000;
			b = rand()%2000-1000;
			if(num==0){
				printf("\n%i + %i = ",a,b);
				scanf("%i",&resp);
				pc = a + b;
				if(resp==pc){
					acerto = acerto + 1;
					erros = erros + 0 ;
					printf("Voce acertou !\n");
				}else{
					erros = erros + 1;
					printf("Voce errou !\nErros = %i\n",erros);
				}
			}
			if(num==1){
				printf("\n%i - %i = ",a,b);
				scanf("%i",&resp);
				pc = a - b;
				if(resp==pc){
					acerto = acerto + 1 ; 
					erros = erros + 0 ;
					printf("Voce acertou !\n");
				}else{
					erros = erros+1;
					printf("Voce errou !\nErros = %i\n",erros);
				}
				
				
			}
				if(num==2){
				printf("\n%i x %i = ",a,b);
				scanf("%i",&resp);
				pc = a * b;
				if(resp==pc){
					acerto = acerto + 1;
					erros = erros + 0;
					printf("Voce acertou !n");
				}else{
					erros = erros+1;
					printf("Voce errou !\nErros = %i\n",erros);
				}
				
				
			}
			
		
		
	}while((erros!=3)||(acerto==20));
		printf("Acertos = %i\n\n",acerto);
		printf("Acabou\n");
		system("pause");
	}
	
	
	}

