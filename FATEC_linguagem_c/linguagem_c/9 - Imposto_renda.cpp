#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, imposto;
    printf ("Digite o salario: ");
    scanf ("%f", &salario);

    if (salario <= 1164) 
       imposto = 0;
    else if ((salario > 1164) && (salario <= 2326))
            imposto = (salario - 174.6) * 0.15;
         else if (salario > 2326)
                 imposto = (salario - 465.35) * 0.275;   

    printf ("\n\nTotal de imposto:  %3.2f \n", imposto);
    printf ("Salario liquido: %3.2f \n\n", salario - imposto);
    system ("pause");
}
