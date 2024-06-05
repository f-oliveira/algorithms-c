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



printf("Corredor nº 1");
printf("\nPosição inicial: 7°");
  a = 0;
  


printf("\n\nCorredor nº 2");
printf("\nPosição inicial: 9°");
  a = 0;
  
 

printf("\n\nCorredor nº 3");
printf("\nPosição inicial: 15°");
  
printf("\n\n");

printf("Corredor nº 1 - Posicao final: %i°\n",num);
printf("Corredor nº 2 - Posicao final: %i° \n",num2);
printf("Corredor nº 3 - Posicao final: %i° \n",num3);


}



