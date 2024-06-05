#include<stdio.h>



int main(void){
	
	srand(time(0));
	
	
	
	int palavra[10];
	int palavra2[10];
	int palavra3[10];
	char palavra4[10];
	int palavra5[10];
	int alea;
	int controle;
	int controle2;
	
	
	
	
		FILE *dois;
	dois = fopen("C:/Users/Erick Silva/Desktop/programação extruturada/aula13/difuse.txt","w+");
	    FILE *arquivo;
	arquivo = fopen("C:/Users/Erick Silva/Desktop/programação extruturada/aula13/forca.txt","r");
		
		
		
		
		
		
		controle=0;
		do{
			
			/*alea=1+rand()%5;
			if (alea==1){
				
			fgets(palavra , 10, (FILE*)arquivo);
					fprintf(dois,"%s",palavra);
				
			}else if (alea==2){
				fgets(palavra2 , 10, (FILE*)arquivo);
					fprintf(dois,"%s",palavra2);
				
			}else if (alea==3){
				fgets(palavra3 , 10, (FILE*)arquivo);
					fprintf(dois,"%s",palavra3);
				
			}else if (alea==4){
				fgets(palavra4 , 10, (FILE*)arquivo);
					fprintf(dois,"%s",palavra4);
				
			}else if (alea==5){
				fgets(palavra5 , 10, (FILE*)arquivo);
					fprintf(dois,"%s",palavra5);
				
			}
			*/
			
			alea=1+rand()%6;
			
			if (alea==1){
				
					fgets(palavra4 , 10, arquivo);
					fprintf(dois,"%s",palavra4);
					
				
			}else 	if (alea==2){
				
			fgets(palavra4 , 10, arquivo);
			fgets(palavra4 , 10, arquivo);
			fprintf(dois,"%s",palavra4);
				
			}else 	if (alea==3){
					fgets(palavra4 , 10, arquivo);
						fgets(palavra4 , 10, arquivo);
		fgets(palavra4 , 10, arquivo);
					fprintf(dois,"%s",palavra4);
				
			}else 	if (alea==4){
					fgets(palavra4 , 10, arquivo);
						fgets(palavra4 , 10, arquivo);
							fgets(palavra4 , 10, arquivo);
			fgets(palavra4 , 10, arquivo);
					fprintf(dois,"%s",palavra4);
			}else 	if (alea==5){
					fgets(palavra4 , 10, arquivo);
						fgets(palavra4 , 10, arquivo);
							fgets(palavra4 , 10, arquivo);
								fgets(palavra4 , 10, arquivo);
				fgets(palavra4 , 10, arquivo);
					fprintf(dois,"%s",palavra4);
				
				
			}else 	if (alea==6){
					fgets(palavra4 , 10, arquivo);
						fgets(palavra4 , 10, arquivo);
							fgets(palavra4 , 10, arquivo);
								fgets(palavra4 , 10, arquivo);
									fgets(palavra4 , 10, arquivo);
		fgets(palavra4 , 10, arquivo);
					fprintf(dois,"%s",palavra4);
				
			}
			

			controle++;
		}while(controle<7);
		
	
}
