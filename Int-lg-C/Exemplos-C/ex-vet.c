#include <stdio.h>

int main(){
	int num[10];
	int cont;

	
	for(cont=0;cont<=9;cont++){
		printf("digite o numero dejesado: ");
		scanf("%d",&num[cont]);
		
	}
	for(cont=9;cont>=0;cont--){
		printf("\nordem inversa: %d",num[cont]);
	}
	

	
	
	
	
	
	
	
}
