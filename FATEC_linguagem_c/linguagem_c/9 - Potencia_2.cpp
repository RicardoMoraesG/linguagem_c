#include <stdio.h>
#include <stdlib.h>
int main(){
    int pot, i;
    printf ("Potencias de 2, variando de 0 a 10: \n");
    pot = 1;
    for (i = 0; i <= 10; i++)
    {
        printf ("2 elevado a %d = %d \n", i, pot);
        pot = pot * 2;
    }    
    system ("pause");    
}
