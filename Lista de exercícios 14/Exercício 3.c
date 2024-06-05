#include<stdio.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL, "");
	srand(time(NULL));
	
	int escolha[];
	int palavra
	
	 FILE *arquivo;
	arquivo = fopen("./Arquivos/exercicio2.txt","r");
		
	fgets(escolha , 10, (FILE*)arquivo);
	printf("%s",escolha);
	
	

}
