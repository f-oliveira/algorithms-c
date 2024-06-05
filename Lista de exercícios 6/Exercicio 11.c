#include<stdio.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL, "");
	
	int alunos;
	float nota, seg=0;
	int cont=0, i;
	
	printf("Número de alunos: ");
	scanf("%d",&alunos);	

	printf("\n\nNotas:\n\n");
	
	for(i=0; i<alunos;i++){
		
		printf("Aluno%2d: ",i+1);
		scanf("%f",&nota);
		
		if(nota > 5.0){
			cont++;
		}
		
		seg += nota;
	}
	
	seg = seg / (float)alunos;
	printf("Media: %.2f",seg);
	if(cont==0){
		printf("\nNão há alunos com nota acima de 5");
	}
	else{
		printf("\nAlunos com nota acima de 5: %d",cont);
	}
}
