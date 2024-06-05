#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int devolveDado();

main(){
	srand(time(NULL));
	int i,s;
	int dado[6];
	
	for(i=0; i<6; i++){
		dado[i] = 0;
	}
	
	for(i=0; i<1000; i++){
		s = devolveDado();
		if(s == 1){
			dado[0]++;
		}
		else if(s == 2){
			dado[1]++;
		}
		else if(s == 3){
			dado[2]++;
		}
		else if(s == 4){
			dado[3]++;
		}
		else if(s == 5){
			dado[4]++;
		}
		else{
			dado[5]++;
		}
	}
	
	
	printf("\n\n...Resultado de mil rolagens: \n");
	for(i=0; i<6; i++){
		printf("Dado [%d]: %d resultados.\n",(i+1),dado[i]);
	}
	printf("\n\n...Porcentagens: \n");
	for(i=0; i<6; i++){
		printf("Dado [%d]: %.2fp resultados\n",(i+1),(float)(dado[i] * 100)/1000);
	}
	
}

int devolveDado(){
	int n1 = rand ()%6;
	n1 = n1+1;
	return n1;
}


