#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

int main() {
	setlocale(LC_ALL, "");
	
	
	time_t t = time(NULL);
	struct tm dt = *localtime(&t);
	
	printf("Data : %d/%d/%d\n",dt.tm_mday,dt.tm_mon + 1, dt.tm_year + 1900);
	printf("Hora : %d:%d:%d\n", dt.tm_hour, dt.tm_min, dt.tm_sec);
	
}
