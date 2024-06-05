#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	srand(time(NULL));
	int qtds, min,max;
	int vet[4];
	
	printf("Entre com a quantidades de senhas a serem geradas\n->");
	scanf("%d",&qtds);
	printf("Entre com o minimo e o maximo de caracteres das senhas\n->");
	scanf("%d %d",&min,&max);
	printf("A senha deverá conter letras maiusculas? 0 Para não 1 para Sim\n->");
	scanf("%d",&vet[0]);
	printf("A senha deverá conter letras minusculas?\n->");
	scanf("%d",&vet[1]);
	printf("A senha devera conter caracteres especiais?\n->");
	scanf("%d",&vet[2]);
	printf("A senha devera conter numeros?\n->");
	scanf("%d",&vet[3]);
	
	int i,j;
	for(i=0; i<qtds; i++){
		
		int letra = rand()%(max-min);
		letra = letra+min;
		char letrax[letra];
		//1111
		if((vet[0] == 1) && (vet[1] == 1) && (vet[2] == 1) && (vet[3] == 1)){
			for(j=0; j<letra; j++){
				letrax[j] = rand()%89;
				letrax[j] = letrax[j] + 33;
			}
		}
		//1110
		else if((vet[0] == 1) && (vet[1] == 1) && (vet[2] == 1) && (vet[3] == 0)){
			for(j=0; j<letra; j++){
				do{
					letrax[j] = rand()%89;
					letrax[j] = letrax[j] + 33;
				}while(letrax[j]>=48 && letrax[j]<=57);
			}
		}
	
		//1100
		else if((vet[0] == 1) && (vet[1] == 1) && (vet[2] == 0) && (vet[3] == 0)){
			for(j=0; j<letra; j++){
				do{
					letrax[j] = rand()%89;
					letrax[j] = letrax[j] + 33;
				}while(letrax[j]<65 || (letrax[j]>90 && letrax[j]<97));
			}
		}
		//1101
		else if((vet[0] == 1) && (vet[1] == 1) && (vet[2] == 0) && (vet[3] == 1)){
			for(j=0; j<letra; j++){
				do{
					letrax[j] = rand()%89;
					letrax[j] = letrax[j] + 33;
				}while((letrax[j]>=33 && letrax[j]<=47) || (letrax[j]>=58&&letrax[j]<=64) || (letrax[j]>=91 && letrax[j]<=96));
			}
		}
		//1011
		else if((vet[0] == 1) && (vet[1] == 0) && (vet[2] == 1) && (vet[3] == 1)){
			for(j=0; j<letra; j++){
				do{
					letrax[j] = rand()%89;
					letrax[j] = letrax[j] + 33;
				}while(letrax[j]>=97 && letrax[j]<=122);
			}
		}
		//1010
		else if((vet[0] == 1) && (vet[1] == 0) && (vet[2] == 1) && (vet[3] == 0	)){
			for(j=0; j<letra; j++){
				do{
					letrax[j] = rand()%89;
					letrax[j] = letrax[j] + 33;
				}while((letrax[j]>=97 && letrax[j]<=122) || (letrax[j]>=48 && letrax[j]<=57));
			}
		}
		
		//1001
		else if((vet[0] == 1) && (vet[1] == 0) && (vet[2] == 0) && (vet[3] == 1	)){
			for(j=0; j<letra; j++){
				do{
					letrax[j] = rand()%89;
					letrax[j] = letrax[j] + 33;
				}while((letrax[j]>=33 && letrax[j]<=47) || (letrax[j]>=58&&letrax[j]<=64) || (letrax[j]>=91 && letrax[j]<=96)
 || (letrax[j]>=97 && letrax[j]<=122));
			}
		}
		
		//1000
		else if((vet[0] == 1) && (vet[1] == 0) && (vet[2] == 0) && (vet[3] == 0	)){
			for(j=0; j<letra; j++){
				//do{
					letrax[j] = rand()%26;
					letrax[j] = letrax[j] + 65;
				//}while((letrax[j]>=97 && letrax[j]<=122) ||  ());
			}
		}
		
		//0111
		else if((vet[0] == 0) && (vet[1] == 1) && (vet[2] == 1) && (vet[3] == 1	)){
			for(j=0; j<letra; j++){
				do{
					letrax[j] = rand()%89;
					letrax[j] = letrax[j] + 33;
				}while(letrax[j]>=65 && letrax[j]<=90);
			}
		}
		
		//0110
		else if((vet[0] == 0) && (vet[1] == 1) && (vet[2] == 1) && (vet[3] == 0	)){
			for(j=0; j<letra; j++){
				do{
					letrax[j] = rand()%89;
					letrax[j] = letrax[j] + 33;
				}while((letrax[j]>=65 && letrax[j]<=90) || (letrax[j]>=48 && letrax[j]<=57));
			}
		}
		
		//0101
		else if((vet[0] == 0) && (vet[1] == 1) && (vet[2] == 0) && (vet[3] == 1	)){
			for(j=0; j<letra; j++){
				do{
					letrax[j] = rand()%89;
					letrax[j] = letrax[j] + 33;
				}while((letrax[j]>=65 && letrax[j]<=90) || (letrax[j]>=33 && letrax[j]<=47) || (letrax[j]>=58&&letrax[j]<=64) || (letrax[j]>=91 && letrax[j]<=96));
			}
		}
		
		//0100
		else if((vet[0] == 0) && (vet[1] == 1) && (vet[2] == 0) && (vet[3] == 0	)){
			for(j=0; j<letra; j++){
				//do{
					letrax[j] = rand()%26;
					letrax[j] = letrax[j] + 97;
				//}while((letrax[j]>=65 && letrax[j]<=90) || (letrax[j]>=33 && letrax[j]<=47) || (letrax[j]>=58&&letrax[j]<=64) || (letrax[j]>=91 && letrax[j]<=96));
			}
		}
		
		//0011
		else if((vet[0] == 0) && (vet[1] == 0) && (vet[2] == 1) && (vet[3] == 1	)){
			for(j=0; j<letra; j++){
				do{
					letrax[j] = rand()%89;
					letrax[j] = letrax[j] + 33;
				}while((letrax[j]>=65 && letrax[j]<=90) || (letrax[j]>=97 && letrax[j]<=122));
			}
		}
		
		//0010
		else if((vet[0] == 0) && (vet[1] == 0) && (vet[2] == 1) && (vet[3] == 0	)){
			for(j=0; j<letra; j++){
				do{
					letrax[j] = rand()%89;
					letrax[j] = letrax[j] + 33;
				}while((letrax[j]>=65 && letrax[j]<=90) || (letrax[j]>=97 && letrax[j]<=122) || (letrax[j]>=48 && letrax[j]<=57));
			}
		}
		
		//0001
			else if((vet[0] == 0) && (vet[1] == 0) && (vet[2] == 0) && (vet[3] == 1	)){
			for(j=0; j<letra; j++){
			//	do{
					letrax[j] = rand()%10;
					letrax[j] = letrax[j] + 48;
				//}while((letrax[j]>=65 && letrax[j]<=90) || (letrax[j]>=97 && letrax[j]<=122) || (letrax[j]>=48 && letrax[j]<=57));
			}
		}
		
		for(j=0; j<letra; j++){
			printf("%c",letrax[j]);
		}
		printf("\n");
	}
}
