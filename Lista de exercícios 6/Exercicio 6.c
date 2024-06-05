#include<stdio.h>
#include<locale.h>
#include<math.h>

int main() {
	
	setlocale(LC_ALL, "");
	
	int i,j,r;
	
	printf("Escolha um número: ");
	scanf("%i", &j);
	
	for(i=1;i<j;i++) {
		
		r = pow(i,2);
		
		printf("%i\n", r);
		
		
	}
	
}
