#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	//arrays multidimensionais
	int a[3][4];
	int b[2][3] = {{1,3,5}, {2,5,4}}
	int i,j;
	srand(time(0));
	
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
		
		a[i][j] = rand()%10;
		printf("%i ", a[i][j]);
		
		}
		printf("\n");
	
	}
}
