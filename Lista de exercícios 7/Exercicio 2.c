#include<stdio.h>
#include<locale.h>
#include<math.h>


int main(){

	srand(time(0));
	int m[5][5];
	int x,y,i,j;
	
	printf("Escolha um posição para o personagem iniciar. ");
	printf("\nX: ");
	scanf("%d",&x);
	
	printf("Y: ");
	scanf("%d",&y);
	
	printf("\n");
	
	for (i=0;i<5;i++) {
		for(j=0;j<5;j++) {
			
			m[i][j] = rand()%2;
			printf("%i ", m[i][j]);	
			m[x][y] = "X";		
		}
		printf("\n");	
	}

	
}
