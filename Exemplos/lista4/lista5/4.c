#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

main(){
	srand(time(NULL));
	
	int mat[10][10];
	int i,j;
	
	for(i=0; i<10;i++){
		for(j=0; j<10; j++){
			mat[i][j] = rand()%2;
		}
	}
	
	printf("\n\n");
	
	for(i=0; i<10;i++){
		for(j=0; j<10; j++){
			printf("[%d] ",mat[i][j]);
		}
		printf("\n");
	}
}
