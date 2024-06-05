#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int main (){
	
	setlocale(LC_ALL,"");
	srand(time(NULL));
	
	int player,bot,total;
	char op;
	
	bot = 18 + rand()%24;
	op = 's';
	total = 0;
	
	
	do {
		player = 1 + rand()%12;
		total += player;
		printf("\nCarta recebida: %i ", player);
		printf("\nSeu total: %i ", total);
		printf("\nMais uma carta ?\n");
		scanf("%s", &op);
		
		
	} while (op == 's' || op == 'S');
	
	printf ("\nPontuações: \nPlayer: %d \nBot: %d", total,bot);
	
	printf("\n\n");
	
	if(total == 21 ) {
		printf("Você ganhou !");
	}
	
	if(bot == 21) {
			printf ("Você perdeu e o bot ganhou !");
	} 
	
	if(total < 21 && bot > 21) {
			printf ("Você ganhou, pois o bot possui um número maior que 21");
	}
	
	if(total > 21 && bot < 21) {
			printf ("Você perdeu, pois possui um número maior que 21");
	} 
	
	if(bot == total ) {
			printf ("Temos um empate !");
	} 
	
	if(bot > 21 && total > 21) {
		printf ("Os dois perderam, pois passaram do limite");
	}
	
	if (total < 21 && bot < 21) {
	
	if ((21 - total) < (21 - bot)) {
		printf("Você ganhou por proximidade!");
	} else ("Você perdeu !");
}


}
