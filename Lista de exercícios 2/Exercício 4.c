#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");

char nome[30];
int opcao;
int gg;
int wp;




printf("Simulacao");


printf("\n\nDigite seu nome : ");
scanf("%[^\n]s",nome);

printf ("\nVoce, %s esta perdido em uma floresta e precisa voltar para casa e escuta barulhos vindo de uma parte da floresta, podem ser pessoas acampando .\n tente encontrar o caminho de volta para a cidade ",nome);

printf("\nOpcao 1 : Seguir em direção a lua \nOpcao 2 : Seguir os sons \nOpcao 3 : Ir ao caminho contrario dos sons");
printf("\n O que fazer ? (numero da opcao) ");
scanf("%i",&opcao);

if (opcao == 1) {
printf(" Seguindo em frente você acaba não vendo nada diante a escuridão e cai em um buraco, se machucando completamente ");
printf("\nOpcao 1 : Gritar e esperar ajuda  \nOpcao 2 : Tentar escalar o buraco ");
printf("\n O que fazer ? (numero da opcao)");
scanf("%i",&gg);
} if  (gg==1) {
printf("Voce grita e pede por ajuda, mas parece ninguem escutar.\n Depois de alguns dias acaba morrendo de sede e fome, cheio de feridas.");
return(0);
} if (gg==2){
	
printf("Voce tenta escalar o buraco mesmo machucado, apos um tempo de muito esforço e dor, acaba deslizando a mão e caindo novamente.\n Diante a queda acaba rompendo o ligamento da perna, o que te resta foi esperar a ajuda, mas no fim morre por sede, fome e com muita dor.");
return(0);
}
if (opcao == 2){
printf("\nVoce segue os sons e parece estar se aproximando de algo, parece um acampamento ou algo do tipo. \nTalvez eles te ajudem.");
printf("\nOque vai fazer ?");
printf("\nOpcao 1 : Vai quietinho até ter certeza que são seguros  \nOpcao 2 : Vai falando alto que precisa de ajuda e se aproximando do acampamento ");
printf("\n O que fazer ? (numero da opcao)");
scanf("%i",&gg);
} if (gg == 1) {
printf("\nVoce se aproxima bem quietinho entre as matas para checar se o local é seguro, se são pessoas confiaveis.\n Acaba pisando em um galho e fazendo barulho, para seu azar era um grupó de caçadores e pelo susto do barulho um acaba, \natirando em direção aos galhos pelo susto e acaba te acertando, vc não aguenta e acaba morrendo.");
return(0);
} if (gg== 2){
printf (" \nApos avisar e se aproximar pedindo ajuda, acaba descobrindo que é um grupo de caçadores e eles acabam te ajudando, te dando alimento e agua e por fim, o levando para casa durante a manhã");
return(0);
}

if (opcao == 3) {
printf ("\nVoce vai seguindo ao caminho contrario dos sons e acaba se encontrando com sons proximos de animais. ");
printf("\nOpcao 1 : Ficar quieto, esconder e esperar que saiam  \nOpcao 2 : Tentar passar quieto e driblar os animais ");
printf("\n O que fazer ? (numero da opcao)");
scanf("%i",&gg);
} if (gg ==1) {
printf("\nOs sons de animais com o tempo acabam sumindo e vc resolve seguir o caminho. \nPor fim acaba encontrando a cidadania denovo e assim volta para sua casa segura.");
return(0);
} if (gg==2){
printf (" \nIndo devagar e calmo, agachado entre as matas.\n Os sons param derrepente, ai pula um animal enorme sobre seu corpo, vc tenta lutar, mas nao possuia nenhuma arma para te ajudar,\n por fim acaba morrendo na luta contra o animal desconhecido.");

return(0);
}



}













