#include <stdio.h>
#include <stdlib.h>
int main(){
    int tab, i;
    printf ("Digite a tabuada a calcular: ");
    scanf ("%d", &tab);
    for (i = 1; i<=10; i++)
    {
        printf ("%d x %d = %d\n", tab, i, tab * i);
    }    
    system ("pause");    
}
