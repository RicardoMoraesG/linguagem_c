#include <stdio.h>
#include <stdlib.h>
/*Suponha que você foi ao supermercado e comprou 2 produtos. Faça um programa C que leia e
nome e o preço dos produtos comprados e calcule o preço total da compra sabendo que você
obteve um desconto de 20%. Deverão ser impressos os nomes dos 2 produtos comprados, seus
preços unitários e o valor total da compra com e sem o desconto obtido.
*/
int main(void)
{
    float p1,p2;
    char n1[10], n2[10];
    printf("Produto \n\t\t");
        scanf("%s",n1);
    printf("Preco: \n\t\t");
        scanf("%f",&p1);
    printf("Desconto: %5.2f", p1*0.20);

    printf("\n Produto \n\t\t");
        scanf("%s",n2);
    printf("Preco: \n\t\t");
        scanf("%f",&p2);
    printf("\nDesconto: %5.2f", p2*0.20);

    printf("\n Valor total %5.2f", p1+p2);
    printf("\n Valor a pagar R$ %5.2f",p1+p2-((p1+p2)*0.2) );
    printf("\n Voce economizou R$ %5.2f",(p1+p2)*0.2);



    printf("\n\n\n****Desenvolvido por Ric.Moraes Soft****\n");

system("pause");

}
