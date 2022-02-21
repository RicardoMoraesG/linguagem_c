#include <stdio.h>
#include <stdlib.h>
int main(){
    // Podemos declarar i como float e não usar o (float)
    int i;
    float n, h;
    printf ("Soma da Sequencia 1/1, 1/2, 1/3, ..., 1/N \n");
    printf ("Digite a quantidade de numeros: ");
    scanf ("%f", &n);
    h = 0;
    for (i = 1; i <= n; i++)
    {
        h = h + 1 / (float) i;
        printf ("1 / %0.0f = %0.2f \n", (float) i, 1 / (float) i);
    }    
    printf ("\nSoma da sequencia = %0.2f \n\n", h);
    system ("pause");    
}
