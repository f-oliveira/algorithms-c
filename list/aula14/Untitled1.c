#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
	
	time_t t = time(NULL);
	struct tm vigia = *localtime(&t);
	int controle;
	FILE *arquivo;
	arquivo = fopen("C:/Users/Erick Silva/Desktop/programação extruturada/aula14/hora.txt","r"); 
	
int ano,anoa,mes,mesa,dia,diaa,hora,horaa,seg,sega,min,mina;
int linha[14];




printf(" %d / %d / %d    ====>    %d : %d : %d",vigia.tm_mday,vigia.tm_mon+1,vigia.tm_year+1900,vigia.tm_hour,vigia.tm_min,vigia.tm_sec);

anoa = vigia.tm_mday;
mesa = vigia.tm_mon+1;
diaa= vigia.tm_year+1900;
horaa=vigia.tm_hour;
mina = vigia.tm_min;
sega = vigia.tm_sec;	



printf("\n\nO ultimo acesso foi em : ");
fscanf(arquivo,"%i %i %i %i %i %i",&dia,&mes,&ano,&hora,&min,&seg);	
printf(" %i / %i / %i ====> %i : %i : %i ",dia,mes,ano,hora,min,seg);


printf(" \n\n\nA %i horas atraz\nA %i minutos atraz\nA %i segundos atraz",hora-horaa,min-mina,seg-sega);
FILE *escrever;
	escrever = fopen("C:/Users/Erick Silva/Desktop/programação extruturada/aula14/hora.txt","w+"); 
fprintf(escrever," \n%d %d %d %d %d %d",vigia.tm_mday,vigia.tm_mon+1,vigia.tm_year+1900,vigia.tm_hour,vigia.tm_min,vigia.tm_sec);
	
	


	
	
	printf("\n\n");
	if (vigia.tm_wday==0){
	printf("\n Domingo , %d de Novembro de %d .  %dh %dm %ds",vigia.tm_mday,vigia.tm_year+1900,vigia.tm_hour,vigia.tm_min,vigia.tm_sec);	
	}else if (vigia.tm_wday==1){
	printf("\n Segunda , %d de Novembro de %d . %dh %dm %ds",vigia.tm_mday,vigia.tm_year+1900,vigia.tm_hour,vigia.tm_min,vigia.tm_sec);	
	}else if (vigia.tm_wday==2){
	printf("\n Terca , %d de Novembro de %d .   %dh %dm %ds",vigia.tm_mday,vigia.tm_year+1900,vigia.tm_hour,vigia.tm_min,vigia.tm_sec);	
	}else if (vigia.tm_wday==3){
	printf("\n Quarta , %d de Novembro de %d .  %dh %dm %ds",vigia.tm_mday,vigia.tm_year+1900,vigia.tm_hour,vigia.tm_min,vigia.tm_sec);	
	}else if (vigia.tm_wday==4){
	printf("\n Quinta , %d de Novembro de %d .  %dh %dm %ds",vigia.tm_mday,vigia.tm_year+1900,vigia.tm_hour,vigia.tm_min,vigia.tm_sec);	
	}else if (vigia.tm_wday==5){
	printf("\n Sexta , %d de Novembro de %d .   %dh %dm %ds",vigia.tm_mday,vigia.tm_year+1900,vigia.tm_hour,vigia.tm_min,vigia.tm_sec);	
	}else if (vigia.tm_wday==6){
	printf("\n Sabado , %d de Novembro de %d .  %dh %dm %ds",vigia.tm_mday,vigia.tm_year+1900,vigia.tm_hour,vigia.tm_min,vigia.tm_sec);	
	}
	

	
	
}
