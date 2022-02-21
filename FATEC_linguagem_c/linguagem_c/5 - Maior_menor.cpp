#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, maior, menor, i, quant;
    printf ("Mostrar o maior e menor valor digitado \n\n");
    printf ("Digite a quantidade de numeros a digitar: ");
    scanf ("%d", &quant);
    for (i = 1; i <= quant; i++)
    {
        printf ("Digite o %do. numero: ", i);
        scanf ("%d", &n);
        if (i == 1)
        {
              maior = n;
              menor = n;
        }
        if (n > maior)
           maior = n;
        else
            if (n < menor)
               menor = n;
    }    
    printf("\nO maior valor digitado foi %d", maior);
    printf("\nO menor valor digitado foi %d\n", menor);
    system ("pause");    
}
