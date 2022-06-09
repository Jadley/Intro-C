#include <stdio.h>

int main(){
	
	const int tamvet=10;
	float nota[tamvet],soma=0,media;
	int cont;
	for(cont=0;cont<tamvet;cont++){
		printf("digite a nota: ");
		scanf("%f",&nota[cont]);
		
		soma=soma + nota[cont];
		
	}
		media=soma/tamvet;
	
	for(cont=0;cont<tamvet;cont++){
		if(nota[cont]>=media){
			printf("nota maior que a media: %.2f\n",nota[cont]);
		}
	}
	
}
