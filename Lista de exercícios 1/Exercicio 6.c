#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	char nome[30];
	float vit,der,emp;
	float resul,percV,percD,percE;
	printf("Nome da equipe: ");
	scanf("%s", &nome);
	
	printf("N° de vitórias: ");
	scanf("%f", &vit);
	
	printf("N° de derrotas: ");
	scanf("%f", &der);
	
	printf("N° de empates: ");
	scanf("%f", &emp);
	
	resul = vit + der + emp;
	
	printf("%f", resul);
	
	percV = (vit/resul)*100;
	percD = (der/resul)*100;
	percE = (emp/resul)*100;
	
	
	
	printf("\nNome: %s \nVitorias: %f - %f %%%\nDerrotas: %f - %f %%%\nEmpates: %f - %f %%%",nome, vit, percV, der, percD, emp, percE);
	
	}
