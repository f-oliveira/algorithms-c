#include<stdio.h>
#include<locale.h>

int main() {

	FILE *fp;	
	fp = fopen ("./Arquivos/exercicio4", "w+");


	
	if (fp == NULL) {
		printf("Erro\n");
	}
	
	int i;
	char roma[50][7]= {"I","II","III","IV","V","VI","VII","VIII","IX","X","XI","XII","XIII","XIV","XV","XVI","XVII","XVIII","XIX","XX","XXI","XXII","XXIII","XXIV","XXV","XXVI","XXVII","XXVIII","XXIX","XXX","XXXI","XXXII","XXXIII","XXXIV","XXXV","XXXVI","XXXVII","XXXVIII","XXXIX","XL","XLI","XLII","XLIII","XLIV","XLV","XLVI","XLVII","XLVIII","XLIX","L"};
	int arabic[50]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
	int controle;
	
	int coluna;
	int b;

for(i=1;i<=50;i++){
	
	coluna = i-1;
	b=i;
				
	fprintf(fp,"%i - %s \n",b,roma+coluna);
	
	b++;
	coluna++;	
}
	
fclose(fp);

}
	
