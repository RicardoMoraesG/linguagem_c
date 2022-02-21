#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
/*
Sabendo que o preço final de um automóvel é dado pela soma do preço de fábrica com o valor pago de
impostos e o percentual pago aos revendedores (5% do preço de fábrica), faça um programa que use a
tabela abaixo e calcule e imprima o nome e o modelo do automóvel e o seu preço final de venda.

Marca           Modelo          % de Impostos
GOL             1000            12
                CL              15
UNO             MILLE            8
                ELX             15
                1.6             18
CORSA           GL              23
*/
{
//        setlocale (LC_ALL, "Portuguese");
int marca, modelo;
char nome[10], nmod[10];
float imposto, preco,precofinal,comis;

printf("\n[1] GOL");
printf("\n[2] UNO");
printf("\n[3] CORSA");
printf("\nCODIGO DA MARCA:\n\t");
fflush(stdin);
scanf("%d",&marca);
switch (marca)
{
    case 1 :
        printf("[10] 1000 \n");
        printf("[20] CL \n");
        printf("escolha MODELO \n\t");
        fflush(stdin);
        scanf("%d",&modelo);
        printf("PRECO DE FABRICA:\t\t R$");
        fflush(stdin);
        scanf("%f",&preco);
        switch(modelo)
            case 10:
            imposto=preco*0.12;
            case 20:
            imposto=preco*0.15;
    break;
    case 2:
        printf("[30] MILLE \n");
        printf("[40] ELX \n");
        printf("[50] 1.6 \n");
        printf("escolha MODELO \n\t");
        fflush(stdin);
        scanf("%d",&modelo);
        printf("PRECO DE FABRICA:\n\t R$");
        fflush(stdin);
        scanf("%f",&preco);
        switch(modelo)
            case 30:
            imposto=preco*0.8;
            case 40:
            imposto=preco*0.15;
            case 50:
            imposto=preco*0.18;
    break;
    case 3:
        printf("PRECO DE FABRICA:\n\t R$");
        fflush(stdin);
        scanf("%f",&preco);
        imposto=preco*0.23;
        modelo=50;
    break;
}
comis=preco*0.05;
precofinal=preco+imposto+comis;
printf("\n\t\t Carro: %d \n\t\t Modelo %d", marca, modelo);
printf("\n\t\t Impostos    R$ %6.2f ",imposto);
printf("\n\t\t Comissao    R$ %6.2f ",comis);
printf("\n\n\t\t Preco final R$ %.2f\n\n\n\n",precofinal);

printf("\n\n\n***************** \nDesenvolvido por \nRicardo de Moraes \n2 Semestre ADS \n*****************\n\n");
}
