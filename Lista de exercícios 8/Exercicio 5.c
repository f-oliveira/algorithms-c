#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main (){ 

	setlocale(LC_ALL,"");

	int x,y,z,i;
	
	printf("Insira dois n�meros x e y, respectivamente: \n");
	scanf("%d %d", &x, &y);
	
	z = x % y;
	
	if (z = 0){
		printf("x � divis�vel por y.");
	} else {
		printf("x n�o � divis�vel por y.\n");
	}
	

	system("pause");
	system("cls");	
	
	for (i=0;i<10;i++){
	
	printf("Insira dois n�meros x e y, respectivamente: \n");
	scanf("%d %d", &x, &y);
	
	z = x % y;
	printf("\nx e y ", x, y);
	
	if (z = 0){
		printf("x � divis�vel por y.");
	} else {
		printf("x n�o � divis�vel por y.\n\n");
	}

	}


}
