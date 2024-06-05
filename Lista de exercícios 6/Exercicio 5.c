#include<stdio.h>
#include<locale.h>
#include<math.h>

int main() {
	
	setlocale(LC_ALL, "");
	
	int num;
	
	printf("Classificação: (0 a 100) ");
	scanf("%d", &num);
	
	
	if(num<20){
		printf("Ruim");
	}
	
	else if(num>=20 && num<40 ){
		printf("Medio");
	}
	
	else if(num>=40 && num<60 ){
		printf("Suficiente");
	}
	
	
	else if(num>=60 && num<80 ){
		printf("Bom");	
	}
	
	else{
		printf("Excelente");	
	}
	
	
}
