#include<stdio.h>

int main() {
	//struct em C
	//declara��o do struct
	
	struct Livro {
		int paginas; //inteiro
		char *titulo; // string
		int edicao; //inteiro
	};//unidade posso declarar a variavel logo apos a cria��o do struct
	
	// declaracao de um struct ja criado
	struct Livro exemplar;
	//utiliza��o
	exemplar.paginas = 100;
	exemplar.titulo = "tutorial de C";
	exemplar.edicao = 1;
	
	printf("Paginas: %d\n", exemplar.paginas);
	printf("T�tulo: %s\n", exemplar.titulo);
	printf("Edicao: %d", exemplar.edicao);
}
