#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(void)
{
   /*Um hotel cobra R$ 60,00 a diária e mais uma taxa de serviços. A taxa de serviços é de:
a. R$ 5,50 por diária, se o número de diárias for maior que 15;
b. R$ 6,00 por diária, se o número de diárias for igual a 15;
c. R$ 8,00 por diária, se o número de diárias for menor que 15.
Elabore um programa que mostre o nome e a conta completa do cliente, especificando o número de diárias e o
respectivo valor, valor da taxa de serviços e o valor total a ser pago.
*/
    setlocale (LC_ALL, "Portuguese");
float diaria, total,tt,n_diaria,tx;
char nome[10];
diaria=60;
printf("diaria: R$ %.2f \n",diaria);
printf("NOME:  ");
fflush(stdin);
scanf("%s",nome);
printf("DIARIAS:");
fflush(stdin);
scanf("%f",&n_diaria);
    if (n_diaria < 15)
        tx = n_diaria*8;
    else if (n_diaria==15)
        tx = n_diaria*6;
            else
                tx = n_diaria*6;
tt=(n_diaria*diaria)+tx;
printf("\n\t Sr(a) %s, \n\t Hospedado(a)durante: %.0f dias \n\t Diarias  R$ %.2f \n\t Servicos R$ %.2f \n\t \n\t Total a Pagar: R$ %.2f" , nome, n_diaria,n_diaria*diaria,tx,tt);
printf("\n\n Obrigado pela preferencia");
printf("\n\n\n***************** \nDesenvolvido por \nRicardo de Moraes \n2 Semestre ADS \n*****************\n\n");
}
