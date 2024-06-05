#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char mat[10][10];
int jog[2];

void imprimeTabuleiro();
void movePersonagem(int dado);
void verifica();


main(){
	srand(time(NULL));
	int i,j;
	jog[0] = 0; jog[1] = 0;
	int estado = 0;
	
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			mat[i][j] = 'x';
		}
	}
	
	int cont = 0;
	//Gerando 10 cobrineas
	while(cont!=10){
		int x = rand()%10;
		int y = rand()%10;
		if(mat[x][y] == 'x' && (x != 0 || y != 0) && (x != 9 || y != 9)){
			mat[x][y] = 'c';
			cont++;
		}
	}
	cont = 0;
		//Gerando 10 escadineas
	while(cont!=10){
		int x = rand()%10;
		int y = rand()%10;
		if(mat[x][y] == 'x' && (x != 0 || y != 0 ) && (x != 9 || y != 9)){
			mat[x][y] = 'e';
			cont++;
		}
	}
	
	for(;;){
	
		imprimeTabuleiro();
		
			
		int dado = (rand()%6)+1;
		printf("\n\tO dado de deslocamento foi jogado. Voce devera andar %d casas.",dado);
		movePersonagem(dado-1);
		if(jog[0] == 9 && jog[1] == 9){
			break;
		}
		system("cls");
	}
	
	printf("\nVITORIA!!!");
	
	
}

void imprimeTabuleiro(){
	int i,j;
	
	printf("\n\n\n\n\n\n");
	for(i=0; i<10; i++){
		printf("\t\t\t\t");
		for(j=0; j<10; j++){
			if(i == jog[0] && j == jog[1]){
				printf("P ");
			}else{
				printf("%c ",mat[i][j]);		
			}
		}
		printf("\n");
	}	
}

void movePersonagem(int dado){
	printf("\n\tValor restante de movimento: [%d]\n",dado+1);
	printf("\n\tSelecione sua proxima acao:\n\t[1] - Esquerda\n\t[2] - Baixo");
	printf("\n\t[3] - Direita\n\t[4] - Cima\n");
	// x = 0 y = 0
	int mov;
	scanf("%d",&mov);
	
	if(mov == 1){
		jog[1] = jog[1]-1;
		if(jog[1]<0){
			jog[1] = 0;
			printf("\n\n\tVoce da de cara com a parede.");
		}	
	}
	
	else if(mov == 2){
		jog[0] = jog[0] + 1;
		if(jog[0] > 9){
			jog[0] = 9;
			printf("\n\n\tVoce da de cara com a parede.");
		}	
	}
	
	else if(mov == 3){
		jog[1] = jog[1] + 1;
		if(jog[1]>9){
			jog[1] = 9;
			printf("\n\n\tVoce da de cara com a parede.");
		}
	}
	else{
		jog[0] = jog[0] - 1;
		if(jog[0] < 0){
			jog[0] = 0;
			printf("\n\n\tVoce da de cara com a parede.");
		}
	}
	system("pause");
	if(jog[0] == 9 && jog[1] == 9){
		return;
	}
	verifica();
	system("cls");
	imprimeTabuleiro();
	if(dado >= 1){
		movePersonagem(dado-1);
	}
	
}

void verifica(){
	if(mat[jog[0]][jog[1]] == 'c'){
		int r1 = (rand()%5)+1;
		int r2 = (rand()%5)+1;
		printf("\nr1 = %d r2 = %d\n",r1,r2);
		system("pause");
		jog[0] = jog[0]-r1;
		jog[1] = jog[1]-r2;
		if(jog[0]<0){
			jog[0] = 0;
		}
		if(jog[1]<0){
			jog[1] = 0;
		}
	}
	
	if(mat[jog[0]][jog[1]] == 'e'){
		int r1 = (rand()%5)+1;
		int r2 = (rand()%5)+1;
		
		printf("\nr1 = %d r2 = %d\n",r1,r2);
		system("pause");
		jog[0] = jog[0]+r1;
		jog[1] = jog[1]+r2;
		if(jog[0]>9){
			jog[0] = 9;
		}
		if(jog[1]>9){
			jog[1] = 9;
		}
	}
}
