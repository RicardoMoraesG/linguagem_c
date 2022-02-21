/*Uma empresa oferece para seus clientes um desconto que é em função do valor da compra do cliente. Este
desconto é de 20%, se o valor da compra for maior ou igual a R$ 500,00 e 15% se for menor. Escreva um
programa para exibir o valor da compra, o desconto obtido e o valor a ser pago pelo cliente.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(void)
{
        setlocale (LC_ALL, "Portuguese");
    float compra,desc,pagar;
    printf ("Valor da Compra: \n \t");
    scanf("%f",&compra);
    if (compra >= 500)
        {
            desc=compra*0.2;
            pagar=compra-(compra*0.2);
            printf("\n Compra: R$ %5.2f \n Desconto: R$ %5.2f \n Valor a Pagar:R$ %5.2f",compra, desc, pagar);
        }
    else if
        (compra < 500)
        {
            desc=compra*0.15;
            pagar=compra-(compra*0.15);
            printf("\n Compra: R$ %5.2f \n Desconto: R$ %5.2f \n Valor a Pagar:R$ %5.2f \n\n\n\n\n",compra, desc, pagar);
        }

        printf("\n\n\n *************Desenvolvido por Ricardo de Moraes***************");
}
