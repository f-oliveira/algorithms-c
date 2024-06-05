#include<time.h>
#include<stdio.h>
#include<stdlib.h>

main(){
	
	FILE *fp = fopen("hora.txt","w+");
	time_t t = time(NULL);
	struct tm dt = *localtime(&t);
	
	fprintf(fp,"%d %d %d  %d %d %d",dt.tm_mday,dt.tm_mon+1,dt.tm_year+1900,dt.tm_hour,dt.tm_min,dt.tm_sec);
	fclose(fp);
}
