#include<stdio.h>

int main(void){
	
	struct Carro{
		
		int ano ;
		char *modelo;
		char *placa ;
		char *cor ;
		
		
	}caarro;
	
	caarro.modelo = "yasuo";
	caarro.placa = "X1L1X0";
	caarro.cor =  "Projeto";
	caarro.ano = 2012;
	
printf("MODELO : %s",caarro.modelo);
printf("\nPLACA : %s",caarro.placa);
printf("\n COR : %s",caarro.cor);	
printf("\nANO : %d",caarro.ano);	
	
	
	
}
