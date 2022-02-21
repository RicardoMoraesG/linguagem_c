#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(void)
{
/*
Calcule o valor do imposto de renda de um contribuinte de acordo com o salário informado.
Considere que o valor do imposto é calculado de acordo com a tabela abaixo:
Renda atual (salário)             **Alíquota ** Dedução

Até R$ 1.164,00                   **Isento**    R$ 0,00
>= R$ 1.164,01 e <= R$ 2.326,00   ** 15% **     R$ 174,60
Acima de R$ 2.326,00              ** 27,5% **   R$ 465,35
*/
    setlocale (LC_ALL, "Portuguese");
float salario,imposto;
printf("RENDA ATUAL/SALARIO:\n\t\t R$ ");
fflush(stdin);
scanf("%f",&salario);

if (salario<=1164)
    printf("\n\t Isento \n\n");
else if ((salario>=1164.01)&&(salario<=2326.00)){
    imposto=salario*0.15-174.6;
    printf("\n\t Aliquota: 15 ");
    printf("\n\t Imposto a pagar: R$ %.2f\n\n",imposto);}
    else{
        imposto=salario*0.275-465.35;
        printf("\n\t Aliquota: 27.5  ");
        printf("\n\t Imposto a pagar: R$ %.2f\n\n",imposto);}
printf("\n\n\n***************** \nDesenvolvido por \nRicardo de Moraes \n2 Semestre ADS \n*****************\n\n");
}
