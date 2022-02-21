#include <stdio.h>
#include <stdlib.h>


int compara (int vet[10], int tamanho);

int main() {
	int vetor[10], i, m;
	for (i=0;i<10;i++)
	{
  	   printf ("Digite o valor %d ->  ",i+1);
       scanf("%d",&vetor[i]);
	}

    m = compara(vetor, 10);
    printf ("\n\nMaior valor do vetor --> %d\n\n",m);
    system ("pause");
}

int compara (int vet[10], int tamanho)
{
    int maior, i;
    maior = vet[0];
    for (i=0; i<tamanho; i++)
        if (vet[i] > maior)
           maior = vet[i];

    return maior;
}

