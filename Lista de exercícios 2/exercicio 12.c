#include<stdio.h>
#include<string.h>
 #include<locale.h>
 #include<stdlib.h>
#include <conio.h>
#include <time.h>
int main(void){
setlocale(LC_ALL,"");

int num;
int num2;
int num3;
int a;
int b;

srand(time(NULL));


num=(rand()%19)+1;
num2=(rand()%19)+1;	
num3=(rand()%19)+1;		



printf("Corredor n� 1");
printf("\nPosi��o inicial: 7�");
  a = 0;
  


printf("\n\nCorredor n� 2");
printf("\nPosi��o inicial: 9�");
  a = 0;
  
 

printf("\n\nCorredor n� 3");
printf("\nPosi��o inicial: 15�");
  
printf("\n\n");

printf("Corredor n� 1 - Posicao final: %i�\n",num);
printf("Corredor n� 2 - Posicao final: %i� \n",num2);
printf("Corredor n� 3 - Posicao final: %i� \n",num3);


}



