#include<stdio.h>
#include<locale.h>
#include<math.h>

int main (){

int a[10][10];
int i,j,somalinha,somacoluna;

srand(time(0));

	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
		
		a[i][j] = rand()%2;
		if (i == 9 || j == 9 ) {
			a[i][j] = 0;	
		}
		
		printf("%i ", a[i][j]);
		}
		
		printf("\n");

	}
	
	printf("\n");
		
	for(i=0; i<10; i++){
	for(j=0; j<9; j++){
		
	a[i][9] += a[i][j];
		
		}
	}
	
	for(i=0; i<9; i++){	
	for(j=0; j<10; j++){
		
		a[9][j] += a[j][i];
		
		}
	
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
		
		printf("%i ", a[i][j]);
		
		}
		printf("\n");

	}

	}
}

