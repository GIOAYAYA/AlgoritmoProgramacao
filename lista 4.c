#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, soma;
    n = 0;
    soma = 0;
    printf("insira um número");

    for (n=1; n<=10; n++){
        soma = soma + n;
        printf(" \n O valor de i é: %d");
        printf(" \n O valor da soma é: %d", soma);
        printf("\n");
    }

    return 0;
}

