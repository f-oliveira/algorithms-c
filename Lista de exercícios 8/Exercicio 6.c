#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<ctype.h>

int main (){ 

	setlocale(LC_ALL,"");
	
	char car;
	
	printf("Insira um caracter: ");
	scanf("%s", &car);
	
	if (isalpha(car)) {
		printf("1");
		
	} else { printf("0");
	
	}
	
}
