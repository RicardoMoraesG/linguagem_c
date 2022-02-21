#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, n;
    float fat;
    printf ("Digite a numero a calcular fatorial: ");
    scanf ("%d", &n);
    fat = 1;
    for (i = n; i >= 1; i--)
    {
        if (i > 1)
           printf ("%d x ", i);
        else
           printf ("%d ", i);
        fat = fat * i;
    }    
    printf ("\n\nFatorial de %d = %0.0f\n", n, fat);
    system ("pause");    
}
