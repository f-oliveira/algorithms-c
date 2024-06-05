#include<stdio.h>
#include<stdlib.h>

void recebeNum(int n);

main(){
	int n;
	printf("Entre com um numero:\n->");
	scanf("%d",&n);
	
	recebeNum(n);
	
}

void recebeNum(int n){
	int i, s=n;
	
	if(s%2 == 0){
		s = s - 11;
		for(i=0; i<5; i++){
			printf("%d ",s);
			s = s+2;
		}
		printf("%d ",n);
		s = s+2;
		
		for(i=0; i<5; i++){
			printf("%d ",s);
			s = s+2;
		}	
	}
	
	else{	
		s = s - 10;
		for(i = 0; i < 5; i++){
			printf("%d ",s);
			s = s+2;
		}
		
		printf(" %d ",n);
	
		s +=1;
		for(i=0; i<5; i++){
			printf("%d ",s);
			s = s+2;
		}
	}
}
