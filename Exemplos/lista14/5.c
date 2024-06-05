#include<time.h>
#include<stdio.h>
#include<stdlib.h>

main(){
	struct datas{
		int dia;
		int mes;
		int ano;
		int hora;
		int min;
		int dias;
		int seg;
	}atual;

	time_t t = time(NULL);
	struct tm dt = *localtime(&t);

	atual.dias= dt.tm_wday;
	atual.dia = dt.tm_mday;
	atual.mes = dt.tm_mon;
	atual.ano = dt.tm_year + 1900;
	atual.hora = dt.tm_hour;
	//atual.hora = 9;
	atual.min = dt.tm_min;
	atual.seg = dt.tm_sec;
	
	//Dia
	if(atual.dias == 0){
		printf("Domingo, ");
	}else if(atual.dias == 1){
		printf("Segunda-Feira, ");
	}else if(atual.dias == 2){
		printf("Terca-feira, ");
	}else if(atual.dias == 3){
		printf("Quarta-feira, ");
	}else if(atual.dias == 4){
		printf("Quinta-feira, ");
	}else if(atual.dias == 5){
		printf("Sexta-feira, ");
	}else{
		printf("Sabado, ");
	}
	
	printf("%d de ",atual.dia);
	
	if(atual.mes == 0){
		printf("Janeiro de ");
	}else if(atual.mes == 1){
		printf("Fevereiro de ");
	}else if(atual.mes == 2){
		printf("Marco de ");
	}
	else if(atual.mes == 3){
		printf("Abril de ");
	}
	else if(atual.mes == 4){
		printf("Maio de ");
	}else if(atual.mes == 5){
		printf("Junho de ");
	}else if(atual.mes == 6){
		printf("Julho de ");
	}else if(atual.mes == 7){
		printf("Agosto de ");
	}else if(atual.mes == 8){
		printf("Setembro de ");
	}else if(atual.mes == 9){
		printf("Outubro de ");
	}else if(atual.mes == 10){
		printf("Novembro de ");
	}else{
		printf("Dezembro de ");
	}
	
	printf("%d. ",atual.ano);
	if(atual.hora<10){
		printf("0");
	}
	printf("%dh%dm%ds",atual.hora,atual.min,atual.seg);
}
