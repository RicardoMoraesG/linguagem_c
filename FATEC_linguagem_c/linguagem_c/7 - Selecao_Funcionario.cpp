#include <stdio.h>
#include <stdlib.h>

int main(){
    int dependentes;
    float sbase, snovo, tempo, aumento;
    char nome[40];
    printf ("Digite o nome do funcionario: ");
    scanf ("%s", nome);
    printf ("Digite o numero de dependentes: ");
    scanf ("%i", &dependentes);
    printf ("Digite o tempo de servico: ");
    scanf ("%f", &tempo);
    printf ("Digite o salario base: ");
    scanf ("%f", &sbase);

    if ((sbase < 500) && (tempo > 4) && (dependentes > 3)){
       printf ("\nVoce tem direito ao aumento");
       aumento = 0.48;
    }
    else
    {
       printf ("\nVoce NAO tem direito ao aumento");
       aumento = 0.0;
    }
    printf ("\n\nNome do funcionario: %s \n", nome);
    printf ("Salario antigo: %3.2f \n", sbase);
    snovo = sbase + (sbase * aumento);
    printf ("Valor do aumento: %3.2f \n", snovo - sbase);
    printf ("Salario novo: %3.2f \n\n", snovo);
    system ("pause");
}
