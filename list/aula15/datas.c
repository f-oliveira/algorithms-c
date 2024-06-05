#include<stdio.h>

int main(void){
	
	srand(time(0));
	
	struct Data{
		
		int ano ;
		int dia;
		int mes;
		
		
	}data;

	data.ano = 2018;
	data.dia = 1+rand()%31;
	data.mes = 1+rand()%12;
	
	
printf("\nANO : %d",data.ano);	
printf("\nDIA : %d",data.mes);		
printf("\nMES : %d",data.dia);		
	
}
