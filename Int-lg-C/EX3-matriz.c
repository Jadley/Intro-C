#include <stdio.h>

int main(){
	
	int mat1[4][4], mat2[4][4], linha, coluna;
	
	for(linha=0; linha<4; linha++)
	for(coluna=0; coluna<4; coluna++){
		printf("digite o valor da matriz[%d][%d]: \n",linha,coluna);
	
		scanf("%d",&mat1[linha][coluna]);
		mat2[coluna][linha]=mat1[linha][coluna];
	}
	
printf ("\n Matriz gerada \n");

for (linha=0;linha<4;linha++)

{

for (coluna=0;coluna<4;coluna++)

printf ("%d ",mat2[linha][coluna]);

printf ("\n");
	
}}
