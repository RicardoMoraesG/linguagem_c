#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(void)
/*Faça um programa que leia o código do departamento em que um funcionário trabalha
(1-secretaria,
 2-tesouraria,
 3-depto pessoal,
 4-almoxarifado),
 seu nome,
 salário base e o
 tempo de serviço.
 O programa deverá então calcular e imprimir o novo salário base do funcionário conforme as condições abaixo:*/
{
        setlocale (LC_ALL, "Portuguese");
int dep;
float sal_base,tempo_ser,aum;
char nome[10];
    printf("NOME:\t         ");
    fflush(stdin);
    scanf("%s",nome);
  printf("SALARIO BASE: R$ ");
    fflush(stdin);
    scanf("%f",&sal_base);
  printf("TEMPO DE SERVICO:");
    fflush(stdin);
    scanf("%f",&tempo_ser);
  printf("\n\n\nDEPARTAMENTO:\n\t [1]-Secretaria \n\t [2]-Tesouraria \n\t [3]-Depto Pessoal \n\t [4]-Almoxarifado \n\t\t");
    fflush(stdin);
    scanf("%d",&dep);
  switch (dep)
    {
        case 1:
            if(tempo_ser <= 4)
                aum=sal_base*1.5;
            else
                aum=sal_base*1.6;
        break;
        case 2:
            if(tempo_ser <= 4)
                aum=sal_base*1.5;
            else
                aum=sal_base*1.6;
        break;
        case 3:
            aum=sal_base*1.3;
        break;
        case 4:
            if(tempo_ser < 2)
               aum=sal_base* 1.3;
            else if((tempo_ser>=2)&&(tempo_ser<=4))
                aum=sal_base*1.4;
            else
                aum=sal_base*1.5;
        break;
    }
    printf("\n\n\n%s: Aumento de R$ %.2f \n\t Novo Salario R$ %.2f",nome,aum-sal_base,aum);

printf("\n\n\n***************** \nDesenvolvido por \nRicardo de Moraes \n2 Semestre ADS \n*****************\n\n");
}

