#include<stdio.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL,"");
	
	int num;
	
	printf("Escolha um número: 1 a 10: \n");
	scanf("%i", &num);
	
	switch (num)
	{
		case 1:
			printf("Um");
		break;
			
		case 2:
			printf("Dois");
		break;
		
		case 3:
			printf("Três");
		break;
		
		case 4:
			printf("Quatro");
		break;
		
		case 5:
			printf("Cinco");
		break;
		
		case 6:
			printf("Seis");
		break;
		
		case 7:
			printf("Sete");
		break;
		
		case 8:
			printf("Oito");
		break;
		
		case 9:
			printf("Nove");
		break;
		
		case 10:
			printf("Dez");
		break;
		
		default:
			printf("Valor invalido !\n");
	}
}
