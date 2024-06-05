#include<time.h>
#include<stdio.h>
#include<stdlib.h>

main(){
	
	time_t t = time(NULL);
	struct tm dt = *localtime(&t);
	printf("Ano : %d\n",dt.tm_year + 1900);
	printf("Mes : %d\n",dt.tm_mon + 1);
	printf("Dia : %d\n",dt.tm_mday);
	printf("Hora: %d\n",dt.tm_hour);
	printf("Min : %d\n",dt.tm_min);
	printf("Sec : %d\n",dt.tm_sec);
	printf("DSem: %d\n",dt.tm_wday);
	printf("DAno: %d\n",dt.tm_yday);
	
	
}
