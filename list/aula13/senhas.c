#include<stdio.h>


int main (void){
	
	
	srand(time(0));
	
	
	int quant;
	FILE *arquivo;
	arquivo = fopen("C:/Users/Erick Silva/Desktop/programação extruturada/aula13/senhas.txt","a+");
	
	srand(time(0));
	int controle;
	int maius;
	int minus;
	int num;
	int esp;
	int test;
	int alea;
	int alea2;
	int alea3;
	int alea4;
	int maximo;
	int minimo;
	int quantidade;
	int quantidade2;
	int quante;
	int wtf;
	int cont;
	
	printf("Digite a quantidade de senhas que serao geradas : ");
	scanf("%i",&quant);
	printf("\n");
	
	printf("A senha devera conter quantos digitos ?\n");
	printf("Maximo  : ");
	scanf("%i",&maximo);
	printf("\n");
	printf("Minimo  : ");
	scanf("%i",&minimo);
	printf("\n");
	quante = maximo-minimo;
	
	printf("A senha devera conter letras maiusculas ?\n1 - sim\n2 - nao \n");
	printf("Escolha  : ");
	scanf("%i",&maius);
	printf("\n");
	
	printf("A senha devera conter letras minusculas ?\n1 - sim\n2 - nao \n");
	printf("Escolha  : ");
	scanf("%i",&minus);
	printf("\n");
	
	printf("A senha devera contercaracteres especiais ?\n1 - sim\n2 - nao \n");
	printf("Escolha  : ");
	scanf("%i",&esp);
	printf("\n");
	
	printf("A senha devera conter numeros ?\n1 - sim\n2 - nao \n");
	printf("Escolha  : ");
	scanf("%i",&num);
	printf("\n");
	
	
	
	
	
	
	
	printf("%i\n",quante);
	
do{
	
	quantidade2=rand()%quante+minimo;
	printf("%i\n",quantidade2);
	
	controle=quantidade2;
	
	fprintf(arquivo," \nSENHA : ");
	
	do{
	
	printf("%i",controle);
	
	
	
	if((num==1)&&(minus==2)&&(esp==2)&&(maius==2)){
		
		alea = 48+rand()%9;
		fprintf(arquivo,"%c",alea);
		
	}

	if((num==2)&&(minus==2)&&(esp==2)&&(maius==1)){
		
		alea = 65+rand()%26;
		fprintf(arquivo,"%c",alea);
		
	}
	
	if((num==2)&&(minus==2)&&(esp==1)&&(maius==2)){
		
		alea = 33+rand()%16;
		if (alea==48){
			alea=64;
		fprintf(arquivo,"%c",alea);
			
		}else{
			
			fprintf(arquivo,"%c",alea);	
		}
	
		
	}
	
	
	if((num==2)&&(minus==1)&&(esp==2)&&(maius==2)){
		
		alea = 97+rand()%26;
		fprintf(arquivo,"%c",alea);
		
	}
	
	
	
	
	
	
	
	
	
	
	if((num==1)&&(minus==1)&&(esp==2)&&(maius==2)){
	
	cont = rand()%2;
	if (cont==1){
		alea = 48+rand()%9;
		fprintf(arquivo,"%c",alea);
		
	}else if (cont==0){
		alea = 97+rand()%26;
		fprintf(arquivo,"%c",alea);
		
	}
}
	
	if((num==2)&&(minus==1)&&(esp==1)&&(maius==2)){
	
	cont = rand()%2;
	if (cont==1){
		alea = 97+rand()%26;
		fprintf(arquivo,"%c",alea);
		
	}else if (cont==0){
		alea = 33+rand()%16;
		if (alea==48){
			alea=64;
		fprintf(arquivo,"%c",alea);
			
		}else{
			
			fprintf(arquivo,"%c",alea);	
		}
	
		
	}
}
	
	if((num==2)&&(minus==1)&&(esp==2)&&(maius==1)){
	
	
	cont = rand()%2;
	if (cont==1){
			alea = 97+rand()%26;
		fprintf(arquivo,"%c",alea);
		
	}else if (cont==0){
			alea = 65+rand()%26;
		fprintf(arquivo,"%c",alea);
		
	}
}
	
	if((num==1)&&(minus==2)&&(esp==2)&&(maius==1)){
	
	cont = rand()%2;
	if (cont==1){
			alea = 65+rand()%26;
		fprintf(arquivo,"%c",alea);
		
	}else if (cont==0){
			alea = 48+rand()%9;
		fprintf(arquivo,"%c",alea);
		
	}
	
}
	
	
	if((num==1)&&(minus==2)&&(esp==1)&&(maius==2)){
	
	
	cont = rand()%2;
	if (cont==1){
			alea = 33+rand()%16;
		if (alea==48){
			alea=64;
		fprintf(arquivo,"%c",alea);
			
		}else{
			
			fprintf(arquivo,"%c",alea);	
		}
	
		
	}else if (cont==0){
			alea = 48+rand()%9;
		fprintf(arquivo,"%c",alea);
		
	}
	
}
	
	
	if((num==2)&&(minus==2)&&(esp==1)&&(maius==1)){
	
	
	cont = rand()%2;
	if (cont==1){
		alea = 33+rand()%16;
		if (alea==48){
			alea=64;
		fprintf(arquivo,"%c",alea);
			
		}else{
			
			fprintf(arquivo,"%c",alea);	
		}

	}else if (cont==0){
			alea = 65+rand()%26;
		fprintf(arquivo,"%c",alea);
		
	}
}
	
	
	
	
	
	
	
	
	
	
	
	if((num==1)&&(minus==1)&&(esp==1)&&(maius==2)){
	
	cont = rand()%3;
	if (cont==0){
	alea = 48+rand()%9;
		fprintf(arquivo,"%c",alea);
		
	}else if (cont==1){
			alea = 33+rand()%16;
		if (alea==48){
			alea=64;
		fprintf(arquivo,"%c",alea);
			
		}else{
			
			fprintf(arquivo,"%c",alea);	
		}
	
		
	}else if (cont==2){
			alea = 97+rand()%26;
		fprintf(arquivo,"%c",alea);
		
	}
}
	
	if((num==1)&&(minus==1)&&(esp==2)&&(maius==1)){
	
	cont = rand()%3;
	if (cont==0){
	alea = 48+rand()%9;
		fprintf(arquivo,"%c",alea);
		
	}else if (cont==1){
		alea = 65+rand()%26;
		fprintf(arquivo,"%c",alea);
		
	}else if (cont==2){
			alea = 97+rand()%26;
		fprintf(arquivo,"%c",alea);
		
	}
}
	
	
	if((num==2)&&(minus==1)&&(esp=1)&&(maius==1)){
	
	cont = rand()%3;
	if (cont==0){
alea = 65+rand()%26;
		fprintf(arquivo,"%c",alea);
		
	}else if (cont==1){
			alea = 33+rand()%16;
		if (alea==48){
			alea=64;
		fprintf(arquivo,"%c",alea);
			
		}else{
			
			fprintf(arquivo,"%c",alea);	
		}
	
		
	}else if (cont==2){
			alea = 97+rand()%26;
		fprintf(arquivo,"%c",alea);
		
	}
	
	
}
	
	if((num==1)&&(minus==2)&&(esp==1)&&(maius==1)){
	
	cont = rand()%3;
	if (cont==0){
	alea = 48+rand()%9;
		fprintf(arquivo,"%c",alea);
		
	}else if (cont==1){
		alea = 65+rand()%26;
		fprintf(arquivo,"%c",alea);
		
	}else if (cont==2){
			alea = 33+rand()%16;
		if (alea==48){
			alea=64;
		fprintf(arquivo,"%c",alea);
			
		}else{
			
			fprintf(arquivo,"%c",alea);	
		}
	
		
	}
	
}
	
	
	
	if((num==1)&&(minus==1)&&(esp==1)&&(maius==1)){
	
	cont = rand()%4;
	if (cont==0){
	alea = 48+rand()%9;
		fprintf(arquivo,"%c",alea);
		
	}else if (cont==1){
		alea = 65+rand()%26;
		fprintf(arquivo,"%c",alea);
		
	}else if (cont==2){
			alea = 33+rand()%16;
		if (alea==48){
			alea=64;
		fprintf(arquivo,"%c",alea);
			
		}else{
			
			fprintf(arquivo,"%c",alea);	
		}
	
		
	}else if (cont==3){
		alea = 97+rand()%26;
		fprintf(arquivo,"%c",alea);
		
	}
	
}
	
	
	
	
	
	controle--;
}while(controle>0);

quant--;

}while (quant>0);



fclose(arquivo);	
}
