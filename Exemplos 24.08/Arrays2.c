#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	float stats[] = {1.45,3.14,17.5,35.345};
	int i;
	
	for(i=0; i<4; i++){
		printf("%f, ", stats[i]);
	}
	printf("\b\b.\n");
}
