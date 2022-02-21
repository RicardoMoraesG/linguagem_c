#include <stdio.h>
#include <stdlib.h>
int main (){
    printf("vetor armazena 10 números\n");
    printf("le um valor \nverifica se este valor existe ou não no vetor lido");
    int vetor[10],i,valor;
    printf("\n\n digite os valores para o vetor \n");
    for (i=0;i<10;i++){
        scanf("%d", &vetor[i]);
    }
    printf("Digite um valor para verificar no vetor \n");
    scanf("%d", &valor);
    for (i=0;i<10;i++){
        if (vetor[i] == valor)
            printf("\n Existe o valor %d na posicao %d do vetor \n", valor, i);
        else
                printf("\n Pesquisando o valor no vetor");
}
}
