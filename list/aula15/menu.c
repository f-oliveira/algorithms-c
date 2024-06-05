#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int Menu (void){
	

	printf("######## MENUZAO GOD #############");
	printf("\n\n");
	printf("1 - Preencher lista com as bandas ");
	printf("\n");
	printf("2 - Procurar musica pela sua posicao no rank");
	printf("\n");
	printf("3 - Procurar musica por seu estilo");
	printf("\n");
	printf("4 - Procurar musica com nome da banda");
	printf("\n");
	
	
}

int preencher (struct Bandas){
	

	controle=0;
	int controle;
	int entrar;
	
	
	do{
	
	
printf("Digite o nome da banda : ");
scanf ("%[^\n]s",banda[controle].nome);
printf("\n");
printf("Digite o estilo da banda : ");
scanf ("%[^\n]s",banda[controle].estilo);
printf("\n");
printf("Digite o ranking da banda : ");
scanf ("%i",&banda[controle].rank);
printf("\n");
printf("Digite a quantidade de membros da banda : ");
scanf ("%i",&banda[controle].membros);	
	
	
	
	
			
	printf("\n\n");
	printf("Deseja parar ?\n0 - Sim\n1 - Nao\nOpcao : ");
	scanf("%i",&entrar);
	
	controle++;
	
}while(entrar!=0);
	
	
}


int pesquisarank(void){
	

	
	
	
	
}










int main (void){
	
	int controle;
	int sair;
	int opcao;
	int rank;
	
	
	
	do{
   
Menu();
printf("Opcao : ");
scanf("%i",&opcao);

		
		if (opcao==1){
			
			preencher();
			
		}else if (opcao==2){
			
				
	printf(" Digite o numero referente ao rank da banda a ser mostrado : ");
	scanf("%i",&rank);
	
	
	printf("\n\n");
	printf(" Rank : %d ",banda[rank-1].rank);
	printf("\n");
	printf(" Nome : %s ",banda[rank-1].nome);
	printf("\n");
	printf(" Estilo : %s ",banda[rank-1].estilo);
	printf("\n");
	printf(" Membros.Quat : %d ",banda[rank-1].membros);
	printf("\n\n\n");
			
		}else if (opcao==3){
			
			
		}else if (opcao==4){
			
			
		}
		
		
	printf("\n\n");
	printf("Deseja sair ?\n0 - Sim\n1 - Nao\nOpcao : ");
	scanf("%i",&sair);
	
		
	}while(sair!=0);
	

}
