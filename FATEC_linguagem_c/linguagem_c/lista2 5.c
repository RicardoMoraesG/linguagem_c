#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(void)
/*Faça um programa que leia o nome, o sexo, a altura e a idade de uma pessoa e calcule e imprima o seu peso
ideal de acordo com as seguintes características da pessoa:*/

{
setlocale (LC_ALL, "Portuguese");
char nome[10];
float h, pesoideal;
int sexo,idade;
setlocale(LC_ALL,"Portuguese");

printf("Nome: \n\t");
fflush(stdin);
scanf("%s",nome);
printf("Sexo: \n\t [1]Feminino \n \t [2]Masculino \n \t \t");
scanf("%d",&sexo);
printf("Altura: \n\t ");
fflush(stdin);
scanf("%f",&h);
printf("Idade: \n\t ");
fflush(stdin);
scanf("%d",&idade);
switch (sexo)
{

    case 1:
            if (h < 1.50)
                pesoideal = ( 62.1 * h ) - 44;
            else {
                if
                    (idade >=35){
                    pesoideal = ( 62.1 * h ) - 45;
                    }
                else
                    pesoideal = ( 62.1 * h ) - 49;
                    }
    break;
    case 2:
            if (h > 1.70)
            {
                if (idade <=20)
                    {
                    pesoideal = (72.7*h)-58;
                    }
                else
                    {
                    pesoideal = ( 72.7 * h ) - 45;
                    }
            }
            else //altura <=1.70
                {
                if (idade <= 40)
                    {
                    pesoideal = ( 72.7 * h ) - 50;
                    }
                else{
                    pesoideal = ( 72.7 * h ) - 58;
                    }
                }
    break;
}
    printf("O peso ideal para %s e': %.2f", nome, pesoideal);

printf("\n\n\n***************** \nDesenvolvido por \nRicardo de Moraes \n2 Semestre ADS \n*****************\n\n");
}
