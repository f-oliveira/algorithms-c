#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
	srand(time(NULL));
	int vet[100];
	int i,c1=0,c3=0,c4=0;
	
	for(i=0; i<100; i++){
		vet[i] = rand()%100;
		vet[i] = vet[i] + 1;
		
		
		if(vet[i] == 1){
			c1++;
		}
		
		else if(vet[i] == 3){
			c3++;
		}
		
		else if(vet[i] == 4){
			c4++;
		}
	}
	
	
	printf("1 = %d\n2 = %d\n3 = %d",c1,c3,c4);
}
