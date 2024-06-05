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
		int seg;
	}datinha,atual;
	FILE *fp = fopen("hora.txt","r+");
	time_t t = time(NULL);
	struct tm dt = *localtime(&t);
	
	fscanf(fp,"%d",&datinha.dia);
	fscanf(fp,"%d",&datinha.mes);
	fscanf(fp,"%d",&datinha.ano);
	fscanf(fp,"%d",&datinha.hora);
	fscanf(fp,"%d",&datinha.min);
	fscanf(fp,"%d",&datinha.seg);
	
	atual.dia = dt.tm_mday;
	atual.mes = dt.tm_mon+1;
	atual.ano = dt.tm_year + 1900;
	atual.hora = dt.tm_hour;
	atual.min = dt.tm_min;
	atual.seg = dt.tm_sec;
	
	printf("Ultimo acesso: %d/%d/%d %d:%d:%d",datinha.ano,datinha.mes,datinha.dia,datinha.hora,datinha.min,datinha.seg);
	printf("\nAcesso atual : %d/%d/%d %d:%d:%d",atual.ano,atual.mes,atual.dia,atual.hora,atual.min,atual.seg);

	printf("\n\nVoce acessou o programa ");
	
	if(atual.ano!=datinha.ano){
		int a = atual.ano - datinha.ano;
		if(a < 0){
			a = a*-1;
		}
		printf("%d ano(s) ",a);
	}
	if(atual.mes!=datinha.mes){
		int a = atual.mes - datinha.mes;
		if(a < 0){
			a = a*-1;
		}
		printf("%d mes(es) ",a);
	}
	if(atual.dia!=datinha.dia){
		int a = atual.dia - datinha.dia;
		
		if(a < 0){
			a = a*-1;
		}
		printf("%d dia(s) ",a);
	}
	if(atual.hora!=datinha.hora){
		int a = atual.hora - datinha.hora;
		if(a < 0){
			a = a*-1;
		}
		printf("%d hora(s) ",a);
	}
	if(atual.min!=datinha.min){
		int a = atual.min - datinha.min;
		if(a < 0){
			a = a*-1;
		}
		printf("%d minuto(s) ",a);
	}
	
	if(atual.seg!=datinha.seg){
		int a = atual.seg - datinha.seg;
		if(a < 0){
			a = a * -1;
		}
		printf("%d segundo(s)",a);
	}
	printf("atras");
	

}
