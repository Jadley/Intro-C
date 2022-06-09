#include <stdio.h>

int main(){
	
	int cont;
	float nota1, nota2, nota3, media;
	
	cont = 1;
	while (cont <= 5){
		printf("Digite a nota1: \n");
		scanf("%f", &nota1);
		
		printf("Digite a nota2: \n");
		scanf("%f", &nota2);
		
		printf("Digite a nota3: \n");
		scanf("%f", &nota3);
		
		media = (nota1+nota2+nota3)/3;
		if(media>= 7){
			printf("voce foi aprovado!\n\n");
		} else{
			printf("voce foi reprovado.\n\n");
		} cont++;
	}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
