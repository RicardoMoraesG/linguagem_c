#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    printf ("Numeros divisiveis por 5 menores que 55 \n");
    for (i = 1; i < 55; i++)
    {
        if (i % 5 == 0)
           printf (" %d", i);
    }    
    printf("\n");
    system ("pause");    
}
