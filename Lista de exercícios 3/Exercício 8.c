#include<stdio.h>
#include<time.h>
int main(){
	int op;
    
 
    
    op=0;
	while(op!=4){
		
    printf("[ 1 ] jogar\n[ 2 ] carregar jogo\n[ 3 ] creditos.\n[ 4 ] sair do jogo.\n");
    scanf("%i",&op);
		
		if(op==1){
			printf(" \nCarregando um mundo novo...\n\n");
		}else if(op==2){
			printf(" \nCarregando jogo salvo...\n");
		}else if(op==3){
			printf(" \nSem creditos para isso.\n");	
	    }
    	
    	printf(" \n");
	}
}
