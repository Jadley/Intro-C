#include <stdio.h>

int main(){
	 
int mat[3][3],lin, col, maior=0, contmaior=0;
printf ("\nDigite valor para os elementos da matriz\n\n");
for ( lin=0; lin<3; lin++ )
for ( col=0; col<3; col++ )
{
printf ("\nElemento[%d][%d] = ", lin, col);
scanf ("%d", &mat[lin][col]);
if(mat[lin][col]>maior){
	maior= mat[lin][col];
}}

for ( lin=0; lin<3; lin++ )
for ( col=0; col<3; col++ )
{
if(mat[lin][col]==maior){
	contmaior++;
}

}
printf("\n\n********* Saida de Dados ********* \n\n");

	printf("maior numero da matriz:%d \n",maior);
	printf("numero de vezes em que aparece: %d",contmaior);

}
