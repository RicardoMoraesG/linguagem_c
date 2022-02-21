#include <stdio.h>
#include <stdlib.h>

int main(){
    float vendas, salario;
    printf ("Digite o valor das vendas: ");
    scanf ("%f", &vendas);
    if (vendas > 20000)
       salario = vendas * 0.10;
    else
        salario = vendas * 0.075;
    printf ("\n\nValor das vendas: %3.2f \n", vendas);
    printf ("Salario a receber: %3.2f \n\n", salario);
    system ("pause");
}
