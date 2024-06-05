#include<stdio.h>

int main()
{
	int i, resultado;

    printf ("Digite um numero: ");
    scanf ("%d", &i);
    resultado = i % 2;

    if (i == 0)
    {
      printf ("O numero 0 eh par");
    }
    else if (resultado == 0 && i > 0)
    {
      printf ("O numero eh par e positivo"); 
    } 
    else if (resultado == 0 && i < 0)
    {
       printf ("O numero eh par e negativo");
    } 
    else if (resultado == 1 && i > 0)
    {
       printf ("O numero eh impar e positivo");
    } 
    else
    {
       printf ("O numero eh impar e negativo");
    }
    
    return 0;

}
