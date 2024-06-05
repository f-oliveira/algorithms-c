#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

main(){
	srand(time(NULL));
	char buffer[200];

	//139 linhas
	
	int linhas = 139;
	
	while(linhas!=0){
		printf("Linhas = %d",linhas);
		FILE *fp1;
		FILE *fp2;
		FILE *fp3;
		
			
		fp1 = fopen("tmp/lol2.txt","r");
		fp2 = fopen("tmp/lol2-tmp.txt","w+");
		fp3 = fopen("tmp/new.txt","a");
		
		
		rewind(fp1);
		int contador = (rand()%linhas);
		int atual = 0;
		
		while(fgets(buffer,200,fp1)){
			if(contador != atual){
				fputs(buffer,fp2);
			}
			else{
				fputs(buffer,fp3);
			}
		atual++;
		}
		
		fclose(fp1);
		fclose(fp2);
		fclose(fp3);
		
		linhas--;
		remove("tmp/lol2.txt");
		//system("pause");
		rename("tmp/lol2-tmp.txt","tmp/lol2.txt");
		//system("pause");

	}
/*	FILE *fp1;
	FILE *fp3;
	rewind(fp1);
	fp1 = fopen("tmp/lol.txt","r");
	fp3 = fopen("tmp/new.txt","a");
	fgets(buffer,200,fp1);
	fputs(buffer,fp3);
	
	fclose(fp1);
	fclose(fp3);
*/}
