#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

int main() {
	/*
	struct aluno{
		int idade;
		chat nome[10];
	} discente;
	
	discente.idade = 10;
	discente.nome = "andre";
	
	struct aluno estudante;
	estudante.idade = 15;
	estudante.nome = "joaozinho";
	*/
	
	time_t t = time(NULL);
	struct tm dt = *localtime(&t);
	printf("Ano : %d\n", dt.tm_year + 1900);
	printf("Mes : %d\n", dt.tm_mon + 1);
	printf("Dia : %d\n", dt.tm_mday);
	printf("Hora : %d\n", dt.tm_hour);
	printf("Min: %d\n", dt.tm_min);
	printf("Sec : %d\n", dt.tm_sec);
	printf("DSem : %d\n", dt.tm_wday);
	printf("DAno : %d\n", dt.tm_yday +1);
}
