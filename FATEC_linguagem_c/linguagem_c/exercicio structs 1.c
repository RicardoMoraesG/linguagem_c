#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define N 5

int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    printf("Elabore um programa que armazene os dados relativos � compra de um autom�vel,\n");
    printf("tais como: c�digo do ve�culo, \ndescri��o, ano e modelo");
    printf(" de fabrica��o. \n");
    printf("Utilize Structs para armazenar estes valores.\n");
    printf("\n\n");
    system ("pause");
    printf("\n\n");

    struct Veiculos
    {
        int codigo;
        char descricao[20], modelo[20];
    } Car;

    int i;

    printf("Digite os dados do ve�culo: ");
    printf("\nModelo: :\t");
    gets(Car.modelo);
    printf("\nDescri��o: \t");
    gets(Car.descricao);
    printf("\nC�digo: \t");
    scanf("%d",&Car.codigo);

    printf("C�digo %d, Modelo %s, Descri��o %s",Car.codigo,Car.descricao,Car.codigo);

    printf("\n\n");
    system("pause");
    printf("\n\n");
}
