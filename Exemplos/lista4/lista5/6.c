#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	
	char vel[3][3];	
	int i,j,l,c,contador=0;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			vel[i][j] = '.';
		}
	}
	for(;;){
		
	srand(time(NULL));
		printf("\n\n");
		printf("[JOGADOR]\n\n");
		for(i=0; i<3; i++){
			printf("\t");
			for(j=0; j<3; j++){
				printf("%c ",vel[i][j]);
			}
			printf("\n");
		}
		
		int d=0; while(d!=1){
			printf("Entre com a linha que voce quer jogar:\n->");
			scanf("%d",&l);
			printf("Entre com a coluna que voce quer jogar:\n->");
			scanf("%d",&c);
			
			if(vel[l-1][c-1] != '.'){
				printf("Essa casa ja foi usada");
			}
			else{
				vel[l-1][c-1] = 'x';
				d = 1;
				contador++;
				
				if(vel[0][0] == 'x'&& vel[0][1] == 'x' && vel[0][2]=='x'){
					printf("\n\nVitxria de X");
					return 0;
				}
				else if(vel[1][0] == 'x'&& vel[1][1] == 'x' && vel[1][2]=='x'){
					printf("\n\nVitxria de X");
					return 0;
				}
				else if(vel[2][0] == 'x'&& vel[2][1] == 'x' && vel[2][2]=='x'){
					printf("\n\nVitxria de X");
					return 0;
				}
				//cxluna
				else if(vel[0][0] == 'x'&& vel[1][0] == 'x' && vel[2][0]=='x'){
					printf("\n\nVitxria de X");
					return 0;
				}
				else if(vel[0][1] == 'x'&& vel[1][1] == 'x' && vel[2][1]=='x'){
					printf("\n\nVitxria de X");
					return 0;
				}
				else if(vel[0][2] == 'x'&& vel[1][2] == 'x' && vel[2][2]=='x'){
					printf("\n\nVitxria de X");
					return 0;
				}
				//np
				else if(vel[0][0] == 'x' && vel[1][1] == 'x' && vel[2][2] == 'x'){
					printf("\n\nVitxria de X");
					return 0;
				}
				
				else if(vel[0][2] == 'x' && vel[1][1] == 'x' && vel[2][0] == 'x'){
					printf("\n\nVitxria de X");
					return 0;
				}
				if(contador>=9){
					printf("Velha");
					return 0;
				}
			}
		}
		
		d = 0;while(d!=1){
			l = rand()%3;
			c = rand()%3;
			if(vel[l][c] != '.'){
				
			}
			else{
				vel[l][c] = 'o';
				d = 1;
				//linha
				if(vel[0][0] == 'o'&& vel[0][1] == 'o' && vel[0][2]=='o'){
					printf("\n\nVitoria de O");
					return 0;
				}
				else if(vel[1][0] == 'o'&& vel[1][1] == 'o' && vel[1][2]=='o'){
					printf("\n\nVitoria de O");
					return 0;
				}
				else if(vel[2][0] == 'o'&& vel[2][1] == 'o' && vel[2][2]=='o'){
					printf("\n\nVitoria de O");
					return 0;
				}
				//coluna
				else if(vel[0][0] == 'o'&& vel[1][0] == 'o' && vel[2][0]=='o'){
					printf("\n\nVitoria de O");
					return 0;
				}
				else if(vel[0][1] == 'o'&& vel[1][1] == 'o' && vel[2][1]=='o'){
					printf("\n\nVitoria de O");
					return 0;
				}
				else if(vel[0][2] == 'o'&& vel[1][2] == 'o' && vel[2][2]=='o'){
					printf("\n\nVitoria de O");
					return 0;
				}
				//np
				else if(vel[0][0] == 'o' && vel[1][1] == 'o' && vel[2][2] == 'o'){
					printf("\n\nVitoria de O");
					return 0;
				}
				
				else if(vel[0][2] == 'o' && vel[1][1] == 'o' && vel[2][0] == 'o'){
					printf("\n\nVitoria de O");
					return 0;
				}
				
					contador++;
				if(contador>=9){
					printf("Velha");
					return 0;
				}
			}
		}
	}
	
	
}
