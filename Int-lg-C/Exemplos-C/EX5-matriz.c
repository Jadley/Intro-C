#include <stdio.h>

int main(){
	
	int mat[5][5], linha, coluna;
	
	for(linha=0; linha<5; linha++)
	for(coluna=0; coluna<5; coluna++){
		if(linha==coluna){
			mat[linha][coluna]=0;
		}else
		mat[linha][coluna]=1;
	}
printf ("\n Matriz gerada \n");

for (linha=0;linha<5;linha++)

{

for (coluna=0;coluna<5;coluna++)

printf ("%d ",mat[linha][coluna]);

printf ("\n");
	

	
}}
