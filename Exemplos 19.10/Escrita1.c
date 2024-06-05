#include<stdio.h>
#include<locale.h>

int main() {
	
	FILE *fp; // criar um ponteiro para apontar p/ o arquivo
	fp = fopen("./Escreve.txt", "w+"); 
	// w write, cria um arquivo ou o zera
	//r read, ler
	//a append adicionar, Leitura e escrita
	
	//confere se o arquivo foi aberto
	if(fp==NULL){
		printf("Erro\n");
	}
	
	int i,n;
	srand(time(NULL));
	
	//escreve no arquivo
	for(i=0;i<10;i++){
		n = rand()%100;
		fprintf(fp, "%d ", n);
		
	}
		
}
