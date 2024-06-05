#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int controle;
	
	struct Bandas{
	
	char *nome;
	char *estilo;
	int rank;
	int membros;
		
		
	}banda[5];




	
	do{
		
		if (controle==0){
			banda[controle].nome = "Linkin Park";
			banda[controle].estilo = "Rock";
			banda[controle].rank = 1;
			banda[controle].membros = 6;
			
		}else if(controle==1){
			banda[controle].nome = "Skillet";
			banda[controle].estilo = "Rock";
			banda[controle].rank = 2;
			banda[controle].membros = 4;
			
		}else if (controle==2){
			banda[controle].nome = "Nefex";
			banda[controle].estilo = "Eletronica";
			banda[controle].rank = 3;
			banda[controle].membros = 1 ;
			
		}else if (controle==3){
			banda[controle].nome = "Hiroyuki Sawano";
			banda[controle].estilo = "Orquestra, Musica classica, Rock, etc";
			banda[controle].rank = 4;
			banda[controle].membros = 1;
			
		}else if (controle==4){
			banda[controle].nome = "Pentakill";
			banda[controle].estilo = "Metal progressivo";
			banda[controle].rank = 5;
			banda[controle].membros = 5;
			
			
		}

		
		controle++;
	}while(controle<5);
	
	
	
	controle =0;
	do{
		
		
		printf(" Rank : %d ",banda[controle].rank);
		printf("\n");
		printf(" Nome : %s ",banda[controle].nome);
		printf("\n");
		printf(" Estilo : %s ",banda[controle].estilo);
		printf("\n");
		printf(" Membros.Quat : %d ",banda[controle].membros);
		printf("\n\n\n");
		
		
	
		
	controle++;
	}while(controle<5);
	
	System("pause");
	System("cls");
	
	printf("\n");
	int opcao;
	printf(" Digite o numero referente ao rank da banda a ser mostrado  (1 a 5): ");
	scanf("%i",&opcao);
	
	
	printf("\n\n");
	printf(" Rank : %d ",banda[opcao-1].rank);
	printf("\n");
	printf(" Nome : %s ",banda[opcao-1].nome);
	printf("\n");
	printf(" Estilo : %s ",banda[opcao-1].estilo);
	printf("\n");
	printf(" Membros.Quat : %d ",banda[opcao-1].membros);
	printf("\n\n\n");
	
	System("pause");
	System("cls");
	
	printf(" Digite o numero referente a um estilo de musica : ");
	printf("\n1 - Rock\n2 - Eletronica\n3 - Sertanejo\n4 - Classica\n5 - Orquestra\n6 - Funk\n7 - Metal");
	scanf("%i",&opcao);
	printf("\n");
	
	if (opcao==1){
	printf(" Nome : %s ",banda[opcao-1].nome);	
	printf("\n");
	printf(" Nome : %s ",banda[opcao].nome);
	printf("\n");
	printf(" Nome : %s ",banda[opcao+2].nome);
		
	}else if (opcao==2){
	printf(" Nome : %s ",banda[opcao].nome);	
		
	}else if (opcao==3){
		printf("\nLamento , nao sou corno");
		
	}else if (opcao==4){
	printf(" Nome : %s ",banda[opcao-1].nome);	
		
	}else if (opcao==5){
	printf(" Nome : %s ",banda[opcao-2].nome);	
		
	}else if (opcao==6){
		printf("\n\nNem fudendo que escuto isso");
		
	}else if (opcao==7){
	printf(" Nome : %s ",banda[opcao-2].nome);	
		
	}
	
	system("pause");
	system("cls");
	
int controle2;
int resut;
char resp[40];
char band[40] ;
resut = 0;


do {
  	
printf (" \nProcure uma banda : ");
scanf ("%[^\n]s",resp);
getchar();
     
controle2 = 0;
do{

strcpy (band,banda[controle2].nome);
resut=strncmp (band,resp,40);  	
controle2++;

if(controle2==5){
break;
}

}while(resut!=0);
    
    
    
   if (resut <0){
printf("\nNao foi encontrado");
   }
   

   
  } while (resut != 0);
  puts ("\nEsta no Rank");
 
	
	

}
		
	

