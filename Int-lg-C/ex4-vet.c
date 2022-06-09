#include <stdio.h>

int main(){

    const int tamvet = 5;
    int vet1[tamvet], vet2[tamvet], posicao;

    for (posicao=0;posicao<tamvet;posicao++){
        scanf("%d",&vet1[posicao]);
        if(vet1[posicao]%2==0){
            vet2[posicao]= vet1[posicao]+1;
        }
        else{
            vet2[posicao] = vet1[posicao]-1;
        }
    }
    for (posicao=0;posicao<tamvet;posicao++){
        printf("vetor 1: %d\n",vet1[posicao]);
        printf("vetor 2: %d\n",vet2[posicao]);
    }
}
