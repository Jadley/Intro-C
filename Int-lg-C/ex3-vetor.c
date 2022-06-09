#include <stdio.h>

int main(){
	
	int vog[5]={0,0,0,0,0}, posicao;
	char letra;
	
	scanf("%c",&letra);
	
	while(letra != 'z'){
		
		switch(letra){
	
		case 'a':
			vog[0]++;
			break;
		case 'e':
		    vog[1]++;
			break;
		case 'i':
		    vog[2]++;
			break;
		case 'o':
		    vog[3]++;
			break;
		case 'u':
		    vog[4]++;
			break;	    
		}
	scanf("%c",&letra);
	}
	printf("quantidade de cada vogal: \n");
	for(posicao=0;posicao<5;posicao++){
		printf("%d ",vog[posicao]);
	}


}
