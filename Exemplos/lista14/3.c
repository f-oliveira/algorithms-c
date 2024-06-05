#include<time.h>
#include<stdio.h>
#include<stdlib.h>

main(){
	
	FILE *fp = fopen("hora.txt","r+");
	time_t t = time(NULL);
	struct tm dt = *localtime(&t);
	
	char buffer[200];
	fgets(buffer,200,fp);
	printf("%s\n\n",buffer);
	
	printf("%d/%d/%d  %d:%d:%d",dt.tm_mday,dt.tm_mon+1,dt.tm_year+1900,dt.tm_hour,dt.tm_min,dt.tm_sec);
	fclose(fp);
}
