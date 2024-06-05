#include<stdio.h>
#include<stdlib.h>
#include<time.h>


main(){
	srand(time(NULL));
	int i;
	
	int v1[10],v2[10],v3[10];
	
	for(i=0; i<10; i++){
		v1[i] = rand()%10;
		v2[i] = rand()%10;
		v3[i] = v1[i] * v2[i];
	}
	
	
	printf("V1    V2    V3\n");
	for(i=0; i<10; i++){
		printf("%2d  * %2d  = %d\n",v1[i],v2[i],v3[i]);
	}
}
