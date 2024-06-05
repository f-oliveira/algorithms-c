#include<stdio.h>
#include<stdlib.h>

main(){
	int cont=0,total=0, num;
	float media;
	
	scanf("%d",&num);
	while(num!=0){
		cont++;
		total = total + num;
		scanf("%d",&num);
	}
	
	media = (float)total/cont;
	printf("Total: [%d]  \nMedia: [%.2f]",total,media);
}
