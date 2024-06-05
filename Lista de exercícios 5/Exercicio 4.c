#include<stdio.h>
#include<locale.h>
#include<math.h>

int main (){

int a[10][10];
int i,j;


srand(time(0));
for(i=0; i<10; i++){
		for(j=0; j<10; j++){
		
		a[i][j] = rand()%2;
		printf("%i ", a[i][j]);
		
		}
		printf("\n");

	}
}
