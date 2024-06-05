#include<stdio.h>
#include<locale.h>
#include<math.h>

int main (){
	
	setlocale(LC_ALL, "");
	
	int a[4];
	int i;
	int pw,resultado,posicao,resposta,contador1,contador2;
	int dnv;
	
	posicao = 3;
	resultado = 0;
	
	srand(time(0));
	
	do {
	
	printf("\nConverta de binário para decimal: ");
	
	for (i=0;i<4;i++){
		
		a[i] = rand()%2;
		printf("%i", a[i]);
	
	pw = pow(2,posicao);
	posicao -= 1;
	resultado += pw * a[i];	
		
	}
	printf("\nResposta: ");
	
	scanf("%i", &resposta);
	
	system("cls");
	printf("Resposta correta: %i ", resultado);
	
	if (resposta == resultado) {
		printf("\nVocê acertou !");
		contador1 += 1;
	}
	else {
		printf("\nVocê errou !");
		contador2 += 1;
	}
	
	
	printf("\n\nDeseja continuar ? (1 = sim ; 2 = não)\n ");
	scanf("%i", &dnv);
	system("cls");
	
	}
	
	
	while (dnv ==  1);
	return 0;
		
}
