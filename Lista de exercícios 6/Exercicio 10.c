#include<stdio.h>
#include<locale.h>


main(){
	
	setlocale(LC_ALL, "");
	
	srand(time(NULL));
	
	int vet[100];
	int i,c1,c3,c4;
	
	for(i=0; i<100; i++){
		vet[i] = rand()%100;
		vet[i] = vet[i] + 1;
		
		printf("%d ", vet[i]);
		
		
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
	
	
	printf("\n\nNúmero 1:  %d\nNúmero 2:  %d\nNúmero 3:  %d",c1,c3,c4);
}
