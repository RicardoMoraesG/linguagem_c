#include <stdio.h>
#include <stdlib.h>
int main(){
    int pot, i, n, m;
    printf ("Potencias de N elevado a M: \n");
    printf ("Digite o valor da base: ");
    scanf ("%d", &n);
    printf ("Digite o valor do expoente: ");
    scanf ("%d", &m);
    pot = 1;
    for (i = 1; i <= m; i++)
    {
        pot = pot * n;
        printf ("%d elevado a %d = %d \n", n, i, pot);
    }
    printf ("\n%d elevado a %d = %d \n\n", n, m, pot);
    system ("pause");
}
