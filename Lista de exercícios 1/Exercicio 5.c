#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	char nome;
	int gol,as,pc,gc,ca,pe;
	float pontosT, golT, asT, pcT, gcT, caT, peT;
	
	printf("Nome: ");
	scanf("%s", &nome);
	
	printf("Gols: ");
	scanf("%i", &gol);
	
	printf("Assist�ncias: ");
	scanf("%i", &as);
	
	printf("Passes certos: ");
	scanf("%i", &pc);
	
	printf("Gols contra: ");
	scanf("%i", &gc);
	
	printf("Cart�es amarelos: ");
	scanf("%i", &ca);
	
	printf("Passes errados: ");
	scanf("%i", &pe);
	
	golT = gol*3;
	asT += as*1.5;
	pcT += pc*0.5;
	gcT += gc*-5;
	caT += ca*-1;
	peT += pe*-0.5;
	
	pontosT = golT + asT + pcT + gcT + caT + peT;
	
	printf("\nNome: Gols: %i : %.2f  \nAssist�ncias: %i : %.2f \nPasses certos: %i : %.2f \nGols contra: %i : %.2f \nCart�es amarelos: %i : %.2f \nPasses errados: %i : %.2f \nPontua��o total: %.2f ",gol, golT,as, asT,pc, pcT,gc, gcT,ca, caT, pe,peT, pontosT);
	

	
	}
