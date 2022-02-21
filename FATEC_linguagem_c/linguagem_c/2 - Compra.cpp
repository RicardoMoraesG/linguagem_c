#include <stdio.h>
#include <stdlib.h>

int main(){
    float compra, desconto, total;
    printf ("Digite o valor da compra: ");
    scanf ("%f", &compra);
    if (compra >= 500)
       desconto = compra * 0.20;
    else
        desconto = compra * 0.15;
    printf ("\n\nValor da compra: %3.2f \n", compra);
    printf ("Desconto: %3.2f \n", desconto);
    printf ("Total a pagar: %3.2f \n\n", compra - desconto);
    system ("pause");
}
