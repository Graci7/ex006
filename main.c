#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10]; // criando um vetor de 10 posições
    int x;

    //entradas
    for( x=0; x<10; x++){
        printf("Digite um valor pos %d: \n", x);
        scanf("%d", &vet[x]);

    }
    // saida

    for ( x=0; x<10; x++){
        scanf("%d", vet[x]);
    }
    return 0;
}
