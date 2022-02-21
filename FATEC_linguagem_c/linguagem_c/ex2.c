#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float prfab, impos, comis, prfin;
    char nome[10];
    printf("digite o nome do carro\n\t");
    scanf("%s",nome);
    printf("\n nome do carro %s\n",nome);

    printf("digite o preço de fabrica\n\t");
    fflush(stdin);
    scanf("%f",&prfab);

    printf("\n preco de fabrica: %5.2f", prfab);
        impos=(prfab*0,45);
        comis=(prfab*0,28);
        prfin=(prfab+impos+comis);
    printf("\n imposto: %f", impos);
    printf("\n comissao: %f", comis);
    printf("\n preco final: %f", prfin);
}
