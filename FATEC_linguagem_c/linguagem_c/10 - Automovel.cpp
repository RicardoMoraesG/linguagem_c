#include <stdio.h>
#include <stdlib.h>

int main(){
    int codigo;
    float pfabrica, imposto, revendedor, pfinal;
    char marca[40], modelo[40];
    printf ("---------------------------- \n");
    printf ("         AUTOMOVEIS \n");
    printf ("---------------------------- \n");
    printf ("1 - GOL - 1000 \n");
    printf ("2 - GOL - CL \n");
    printf ("3 - UNO - Mille \n");
    printf ("4 - UNO - ELX \n");
    printf ("5 - UNO - 1.6 R \n");
    printf ("6 - CORSA - GL \n\n");
    printf ("Digite o codigo do automovel: ");
    scanf ("%i", &codigo);
    printf ("Digite o preco de fabrica: ");
    scanf ("%f", &pfabrica);
    revendedor = pfabrica * 0.05;
    switch (codigo) {
           case 1 : imposto = pfabrica * 0.12; break;
           case 2 : imposto = pfabrica * 0.15; break;
           case 3 : imposto = pfabrica * 0.08; break;
           case 4 : imposto = pfabrica * 0.15; break;
           case 5 : imposto = pfabrica * 0.18; break;
           case 6 : imposto = pfabrica * 0.23; break;
           default : printf ("Codigo nao cadastrado");
    }
    pfinal = pfabrica + imposto + revendedor;
    printf ("Preco de fabrica ...: %3.2f \n", pfabrica);
    printf ("Imposto ............: %3.2f \n", imposto);
    printf ("Revendedor .........: %3.2f \n", revendedor);
    printf ("Preco final de venda: %3.2f \n\n", pfinal);
    system ("pause");
}
