#include <stdio.h>
#include <stdlib.h>
int main(){
    int soma, i;
    printf ("Soma dos 10 primeiros inteiros \n");
    soma = 0;
    for (i = 1; i <= 10; i++)
    {
        soma = soma + i;
    }    
    printf ("\nSoma da sequencia = %d \n\n", soma);
    system ("pause");    
}
