#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

int main() {
	
	setlocale(LC_ALL, "");
	
	FILE *fp;	
	fp = fopen ("./Arquivos/exercicio1.txt", "w+");
	
	time_t t = time(NULL);
	struct tm dt = *localtime(&t);
	
	fprintf(fp,"Data : %d/%d/%d\n",dt.tm_mday,dt.tm_mon + 1, dt.tm_year + 1900);
	fprintf(fp,"Hora : %d:%d:%d\n", dt.tm_hour, dt.tm_min, dt.tm_sec);
	
}
