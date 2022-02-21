#include <stdio.h>
#include <stdlib.h>
int main(){
    int soma, soma3, soma5, i;
    printf ("Somatoria dos multiplos de 3 e 5 de 200 a 500 \n");
    soma3 = 0;
    soma5 = 0;
    for (i = 200; i <= 500; i++)
    {
        if (i % 3 == 0)
        {
        printf ("%d = M3 ||  ", i);
        soma3 = soma3 + i;
           }
                if (i % 5 == 0)
                    {
                        printf ("%d = M5 ||  ", i);
                        soma5 = soma5 + i;
                    }
        }

    soma = soma3+soma5;
    printf (" soma3 %d + soma5 %d = %d \n\n", soma3, soma5, soma);

    //printf("\nSoma dos pares = %d\n", soma);
    system ("pause");
}
