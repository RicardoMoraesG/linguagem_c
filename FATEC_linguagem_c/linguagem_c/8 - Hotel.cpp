#include <stdio.h>
#include <stdlib.h>

int main(){
    float taxa, tdiarias, tservico, totalgeral;
    int diarias;
    char nome[40];
    printf ("Digite o nome do cliente: ");
    scanf ("%s", nome);
    fflush (stdin);
    printf ("Digite o numero de diarias: ");
    scanf ("%i", &diarias);
    fflush (stdin);

    if (diarias > 15) 
       taxa = 5.50;
    else if (diarias == 15)
            taxa = 6.00;
         else if (diarias < 15)
                 taxa = 8.00;   

    tdiarias = diarias * 60.00;
    tservico = taxa * diarias;
    totalgeral = tdiarias + tservico;

    printf ("\n\nNome do cliente: %s \n", nome);
    printf ("Quantidade de diarias: %i \n", diarias);
    printf ("Valor das diarias: %3.2f \n", tdiarias);
    printf ("Valor da taxa de servico: %3.2f \n", tservico);
    printf ("Total a pagar (diarias + taxas): %3.2f \n\n", totalgeral);
    system ("pause");
}
