#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(void)
{
   /*Suponha que uma empresa deseja fazer uma sele��o entre os funcion�rios para o aumento salarial. S�
participar� deste aumento o funcion�rio que possuir mais de 4 anos de servi�o, mais de 3 dependentes e
sal�rio atual abaixo de R$ 500,00. Fa�a um programa que leia estes dados de um funcion�rio e imprima uma
mensagem dizendo se ele tem direito ao aumento ou n�o. Caso ele tenha este direito, calcule o novo sal�rio
deste funcion�rio em fun��o de uma taxa de aumento de 48%. Dever�o ser impressos o nome do funcion�rio,
seu sal�rio antigo e o novo sal�rio.
*/
    setlocale (LC_ALL, "Portuguese");
float temp_ser,ddtes,sal_atual,sal_novo;
char nome[10];
 printf("\n NOME:\n");
    fflush(stdin);
    scanf("%s",nome);
 printf("TEMPO DE SERVICO:\n\t");
    fflush(stdin);
    scanf("%f",&temp_ser);
 printf("NUMERO DE DEPENDENTES:\n\t");
    fflush(stdin);
    scanf("%d",&ddtes);
 printf("SALARIO ATUAL:\n\t R$ ");
    fflush(stdin);
    scanf("%f",&sal_atual);
if ((sal_atual <= 500)&&(ddtes<=3)&&(temp_ser>=4)){
    sal_novo=sal_atual*1.48;
    printf("Aumento para categoria de 48% \n");
    printf("Novo Salario para:\n\t %s,  R$ %.2f",nome,sal_novo);
    }
else
printf("\n %s, Nao cabe aumento nessa categoria.\n",nome);
printf("\n\n\n***************** \nDesenvolvido por \nRicardo de Moraes \n2 Semestre ADS \n*****************\n\n");
}
