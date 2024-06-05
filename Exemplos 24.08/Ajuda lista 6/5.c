#include<stdio.h>
#include<stdlib.h>

main(){
	int num;
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
