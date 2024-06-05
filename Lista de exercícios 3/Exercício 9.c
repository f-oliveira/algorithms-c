#include<stdio.h>
#include<time.h>
#include<locale.h>
int main(){
	int sena;
	int vitel;
	int venancio;
	int i;
	
	setlocale(LC_ALL,"");
	
	
	printf("\n|´Ô-ô> sena\n|´Ô-ô> vitel\n|´Ô-ô> venancio");
	
	srand(time(0));
	sena= rand() % 20;
	vitel= rand() %20;
	venancio= rand() %20;
	
	printf("\n\n");
	
    
    
    printf("Posicao final: \n\n");
    
    i=0;
    while(i<=sena){
    	printf(".");
    	
    i=i+1;
	}
	printf(" ´Ô-ô> sena\n\n");
	
	 i=0;
    while(i<=vitel){
    	printf(".");
    	
    i=i+1;
	}
	printf(" ´Ô-ô> vitel\n\n");
	
	 i=0;
    while(i<=venancio){
    	printf(".");
    	
    i=i+1;
	}
	printf(" ´Ô-ô> venancio\n\n");
}
