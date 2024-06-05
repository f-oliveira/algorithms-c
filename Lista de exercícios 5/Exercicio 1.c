#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int a[4];
	int i;
	
	srand(time(0));
	
	for (i=0;i<4;i++){
		a[i] = rand()%2;
		printf("%i, ", a[i]);
	}
	printf("\b\b.");
	
}
