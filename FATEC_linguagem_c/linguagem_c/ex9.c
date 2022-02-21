#include <stdio.h>
#include <stdlib.h>
/*Considere que uma empresa queira dar um aumento salarial a um funcionário. Deste funcionário, a
empresa possui as seguintes informações: seu nome, idade e salário base. O procedimento
adotado para o cálculo de aumento do salário é o seguinte: 1) Reajustar o salário base do
funcionário em 30%; 2) Conceder uma gratificação de 20% sobre o salário já reajustado; 3) Efetuar
descontos de 15% sobre o salário já reajustado e sem a concessão da gratificação. Deverão ser
impressos o nome e o novo salário do funcionário na sua forma bruta (aumento + gratificação ) e
líquida ( aumento + gratificação - descontos ).
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
