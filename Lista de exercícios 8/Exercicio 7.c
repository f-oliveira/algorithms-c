#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main (){ 

	setlocale(LC_ALL,"");
	
	char l[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int n[26];
	int i = 0;
	char l1,l2,aux1,aux2,r;
	
	printf("Escolha duas letras: ");
	 scanf("%c %c", &l1, &l2); 
	 printf("%c %c\n", l1,l2);
	
	for (i=1;i<=26;i++) {
		n[i] = i;	
		printf("%c ", l[i-1] );
	}
	
	for (i=1;i<=26;i++) {
		
		if(l1 == l[i]) {
			aux1 = n[i];
			printf("\n1 - %d",aux1);
			}
		
		if(l2 == l[i]) {
			aux2 = n[i];
			printf("\n2 - %d",aux2);
			
		}	
	}
	
	r = aux2 - aux1;
	
	printf("\n%d %d \n Diferença de casas: %d", aux1, aux2, r);
	
	
	}
