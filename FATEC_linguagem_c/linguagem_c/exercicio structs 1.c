#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define N 5

int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    printf("Elabore um programa que armazene os dados relativos à compra de um automóvel,\n");
    printf("tais como: código do veículo, \ndescrição, ano e modelo");
    printf(" de fabricação. \n");
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

    printf("Digite os dados do veículo: ");
    printf("\nModelo: :\t");
    gets(Car.modelo);
    printf("\nDescrição: \t");
    gets(Car.descricao);
    printf("\nCódigo: \t");
    scanf("%d",&Car.codigo);

    printf("Código %d, Modelo %s, Descrição %s",Car.codigo,Car.descricao,Car.codigo);

    printf("\n\n");
    system("pause");
    printf("\n\n");
}
