#include <stdio.h>
int main (){
    int vetor [6], i, nBusca, posicao[6], contador = 0;

    for(i=0;i<6;i++){
        printf("Digite o valor:\n");
        scanf("%d", &vetor[i]);

    }
    printf("Digite o numero: ");
    scanf("%d"; &nBusca);

    
        for(i=0;i<6;i++){
            if(nBusca == vetor [i]){
                posicao[contador] =i;
                contador++;

            }
        }
}