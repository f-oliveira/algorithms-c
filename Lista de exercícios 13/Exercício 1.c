#include<stdio.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL, "");
	srand(time(NULL));
	
	int senhas, min, max;
	int op1,op2,op3,op4,op5;
	int i,j,k,l;
	int VCesp[82] = {0,1,2,3,4,5,6,7,8,9,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,58,59,60,61,62,63,64};
	int VLmai[25],VLmin[25];
	int Vnum[10] = {0,1,2,3,4,5,6,7,8,9};
	int senha;
	
	j = 32;
	k= 0;
	for(i = 97; i<=122;i++){
		VLmin[k] = i;
		VCesp[j] = i;
		j++;
		
	}
	
	j = 59;
	k = 0;
	
	for(i = 65; i<=90;i++){
		VLmai[k] = i;
		VCesp[j] = i;
		j++;
		k++;
	}
/*
for(i = 0; i<=25;i++){
		printf("%d\n", VLmai[i]);
	}
	
	for(i = 0; i<=25;i++){
		printf("%d\n\n", VCesp[i]);
	}
	 */
	 
	 //for(i = 0; i<=82;i++){
	//	printf("%d\n\n", VCesp[i]);
	//}
	
	
		
		

	printf("Quantidade de senhas:  ");
	scanf("%d", &senhas);
	
	printf("Mínimo e máximo de caracteres das senhas: ");
	scanf("%d  %d", &min, &max);
	
	printf("A senha irá conter: (0 = não e 1 = sim)");

	printf(" \n1- Letras maiúsculas: ");
	scanf("%d",&op1);
	printf("\n2- Letras minúsculas: ");
	scanf("%d",&op2);
	printf("\n3- Caracteres especiais: ") ;
	scanf("%d",&op3);
	printf("\n4 -Números ");
	scanf("%d",&op4);
	printf("\n5- Ou qualquer combinação dessas acima: ");
	scanf("%d",&op5);
	
	if (op5 == 1){
		op1 = 0;
		op2 = 0;
		op3 = 0;
		op4 = 0;
	}
		
		
	printf("\n\nSenhas: \n\n");
	
	
	// Letras maiusculas
	if((op1 == 1) && (op2 == 0) && (op3 == 0) && (op4 == 0) && (op5 == 0) ) {
		
		
	FILE *fp;	
	fp = fopen ("./Arquivos/exercicio1.txt", "w+");
	
	if (fp == NULL) {
		printf("Erro\n");
	}
		
		for(i=0;i<senhas;i++){
			k = min + rand() % (min-max);
			
			for(j=0;j<=k;j++){
			
				l = rand() % 25;
				senha = VLmai[l];
				fprintf(fp,"%c",senha);
				
			}
			fprintf(fp,"\n\n");
		}	
	}
	
	//Letras minusculas
	if((op1 == 0) && (op2 == 1) && (op3 == 0) && (op4 == 0) && (op5 == 0) ) {
		
		for(i=0;i<senhas;i++){
			k = min + rand() % (min-max);
			
			for(j=0;j<=k;j++){
				
				l = rand() % 25;
				senha = VLmin[l];
				printf("%c",senha);
				
			}
			printf("\n\n");
		}
	}
	
	//Caracters especiais
	if((op1 == 0) && (op2 == 0) && (op3 == 1) && (op4 == 0) && (op5 == 0)) {
		
		for(i=0;i<senhas;i++){
			k = min + rand() % (min-max);
			
			for(j=0;j<=k;j++){
			
				l = 10 + rand() % (10 - 25);
				senha = VCesp[l];
				printf("%c",senha);
						
			}
			printf("\n\n");
		}	
	}
	
	//numeros
	if((op1 == 0) && (op2 == 0) && (op3 == 0) && (op4 == 1) && (op5 == 0)) {
		
		for(i=0;i<senhas;i++){
			k = min + rand() % (min-max);
			
			for(j=0;j<=k;j++){
			
				l = rand() % 10;
				senha = Vnum[l];
				printf("%c",senha);
						
			}
			printf("\n\n");
		}	
	}
	
	if((op1 == 0) && (op2 == 0) && (op3 == 0) && (op4 == 0) && (op5 == 1)) {
		
		for(i=0;i<senhas;i++){
			k = min + rand() % (min-max);
			
			for(j=0;j<=k;j++){
			
				l = rand() % 82;
				senha = VCesp[l];
				printf("%c",senha);
						
			}
			printf("\n\n");
		}	
	}
	
}
