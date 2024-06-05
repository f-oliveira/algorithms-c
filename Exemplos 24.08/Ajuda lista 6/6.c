#include<stdio.h>
#include<stdlib.h>

main(){
	int num;
	int i;
	
	scanf("%d",&num);	

	for(i=1; i<num; i++){
		printf("[%d] -> [%d]\n",i,i*i);
	}
}
