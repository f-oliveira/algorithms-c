#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

main(){
	
	srand(time(NULL));
	int mat[10][10];
	int i,j;
	
	for(i=0; i<9;i++){
		for(j=0; j<9; j++){
			mat[i][j] = rand()%2;
		}
	}
	
	for(i=0; i<9; i++){
		mat[i][9] = 0;
		mat[9][i] = 0;			
	}
	
	//Calc linha
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			mat[i][9] += mat[i][j];
		}
	}
	
	//Calc coluna
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			mat[9][i] += mat[j][i];
		}
	}
	
	for(i=0; i<9; i++){
		mat[9][9] += mat[i][9];
	}
	printf("\n\n");
	
	for(i=0; i<10;i++){
		for(j=0; j<10; j++){
			printf("[%2d] ",mat[i][j]);
		}
		printf("\n");
	}
}
