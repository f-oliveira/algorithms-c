#include<stdio.h>
#include<stdlib.h>

float retornaTriangulo(float b, float a);

main(){
	float b, a;
	printf("Entre com a base do triangulo:\n->");
	scanf("%f",&b);
	printf("Entre com a altura do triangulo: \n->");	
	scanf("%f",&a);
	
	printf("\n\n[%f]",retornaTriangulo(b,a));
}

float retornaTriangulo(float b, float a){
	return (b*a)/2.0;
}
