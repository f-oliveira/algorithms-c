#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
int main(void){

setlocale(LC_ALL,"");


srand(time(0));

int x;
int unidade;
int dezena;
int centena;
int a;
int b;
int c;
int d;



x =  1 + rand()%999;






printf("\nO número gerado foi : %i \n",x);

centena = (x-((x/1000)*1000))/100;

a = x/10;

c = x/100;

d = c*100;

b = a*10;

unidade= x-b ;

dezena = ((x - d) - unidade)/10;


printf("A soma de seus algarismos é de : %i",unidade+centena+dezena);



}
