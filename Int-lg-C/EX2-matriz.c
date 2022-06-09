#include <stdio.h>

int main(){
	
	int mat[4][4], linha, coluna;
	
	for(linha=0; linha<4; linha++)
	for(coluna=0; coluna<4; coluna++){
		printf("digite o valor da matriz[%d][%d]: \n",linha,coluna);
		if(linha==coluna){
			printf ("Elemento[%d][%d] = 0 \n",linha,coluna);
			mat[linha][coluna]=0;
		}else
		scanf("%d",&mat[linha][coluna]);
	}
printf ("\n Matriz gerada \n");

for (linha=0;linha<4;linha++)

{

for (coluna=0;coluna<4;coluna++)

printf ("%d ",mat[linha][coluna]);

printf ("\n");
	

	
}}
