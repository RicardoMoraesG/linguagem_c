#include <stdio.h>
#include <stdlib.h>
/*Considere que uma empresa queira dar um aumento salarial a um funcion�rio. Deste funcion�rio, a
empresa possui as seguintes informa��es: seu nome, idade e sal�rio base. O procedimento
adotado para o c�lculo de aumento do sal�rio � o seguinte: 1) Reajustar o sal�rio base do
funcion�rio em 30%; 2) Conceder uma gratifica��o de 20% sobre o sal�rio j� reajustado; 3) Efetuar
descontos de 15% sobre o sal�rio j� reajustado e sem a concess�o da gratifica��o. Dever�o ser
impressos o nome e o novo sal�rio do funcion�rio na sua forma bruta (aumento + gratifica��o ) e
l�quida ( aumento + gratifica��o - descontos ).
*/
int main(void)
{
    char nome[30];
    float idade,sbase,reajuste,sbruto,desc,grat;

    printf("\n Nome:");
        scanf("%s", nome);
    printf("\n Idade:");
        scanf("%f", &idade);
    printf("\n Salario Base R$ ");
        scanf("%f", &sbase);
    reajuste = sbase*1.3;
    grat=reajuste*0.2;
    desc=reajuste*0.15;

    printf("\n Nome: %s", nome);
    printf("\n Idade: %f", idade);

    sbruto=reajuste+grat;

    printf("\n Salario bruto R$ %5.2f", sbruto);
    printf("\n Salario liquido R$ %5.2f", sbruto-desc);
    printf("\n\n\n****Desenvolvido por Ric.Moraes Soft****\n");
system("pause");

}
