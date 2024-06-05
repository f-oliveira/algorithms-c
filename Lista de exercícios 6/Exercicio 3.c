#include<stdio.h>
#include<locale.h>
#include<math.h>

int main () {
	
	setlocale(LC_ALL, "");
	
	int num, cont, numt;
	float media;
	
	media = 0;
	cont = 0;
	numt = 0;
	
	printf("Digite um número: \n");
	scanf("%d", &num);
	
	while(num != 0){
		
	if(num%3 == 0) {
		cont++;
		numt += num;
		
	}
	
	scanf("%i", &num);
	}
	
	media = numt / cont;
	
	printf("Contadores: %d \nTotal: %d \nMédia: %.1f", cont, numt, media);
}
