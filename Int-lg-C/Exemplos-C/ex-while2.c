#include <stdio.h>

int main(){
	
	int num;
	
	do{
		
		printf("digite um numero inteiro: \n");
		scanf("%d", &num);
		if(num!=0 && num!=9){
			if(num%2 ==0){
				printf("numero sucessor = %d \n\n", num+1);
			}
			else{
				printf("numero antecessor = %d \n\n", num-1);
			}
		}
	}
	while(num!=0 && num!=9);
	
		
	
	
	
	
	
	
	
}
