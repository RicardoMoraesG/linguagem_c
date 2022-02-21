#include <stdio.h>
#include <stdlib.h>
int main(void)
{
        char nome[10];
        printf("nome do produto:");
            fflush(stdin);
            scanf("%s", nome);
        int preco;
        printf("\n Preço de %s:",nome);
            fflush(stdin);
            scanf("%d",&preco);
        float desc;
        printf("\n Porcentagem de Desconto de %s:",nome);
            fflush(stdin);
            scanf("%f",&desc);
        float pdesc;
        pdesc=preco*desc/100;
            printf("\t Desconto do %s e'       R$ %5.2f", nome, pdesc);
        float pfinal;
        pfinal=preco-pdesc;
        printf("\n \t Preco Final de %s e'    R$ %5.2f \n\n", nome, pfinal);


        char nome2[10];
        printf("nome do produto:");
            fflush(stdin);
            scanf("%s", nome2);
        int preco2;
        printf("\n Preço de %s:",nome2);
            fflush(stdin);
            scanf("%d",&preco2);
        float desc2;
        printf("\n Porcentagem de Desconto de %s:",nome2);
            fflush(stdin);
            scanf("%f",&desc2);
        float pdesc2;
        pdesc2=preco2*desc2/100;
            printf("\t Desconto do %s e'       R$ %5.2f", nome2, pdesc2);
        float pfinal2;
        pfinal2=preco2-pdesc2;
        printf("\n \t Preco Final de %s e'    R$ %5.2f \n\n", nome2, pfinal2);


        char nome3[10];
        printf("nome do produto:");
            fflush(stdin);
            scanf("%s", nome3);
        int preco3;
        printf("\n Preço de %s:",nome3);
            fflush(stdin);
            scanf("%d",&preco3);
        float desc3;
        printf("\n Porcentagem de Desconto de %s:",nome3);
            fflush(stdin);
            scanf("%f",&desc3);
        float pdesc3;
        pdesc3=preco3*desc3/100;
            printf("\t Desconto do %s e'       R$ %5.2f", nome3, pdesc3);
        float pfinal3;
        pfinal3=preco3-pdesc3;
        printf("\n \t Preco Final de %s e'    R$ %5.2f \n\n", nome3, pfinal3);


       float compra;
        compra=preco+preco2+preco3;
        printf("\n \t Compra   R$ %5.2f \n\n", compra);
       float pagar;
        pagar=pfinal+pfinal2+pfinal3;
        printf("\n \t TOTAL A PAGAR   R$ %5.2f \n\n", pagar);

      float econo;
        econo=pdesc+pdesc2+pdesc3;
        printf("\n \t ***Voce Economizou   R$ %5.2f ***\n\n", econo);

printf("\n\n\n****Desenvolvido por RicardoMoraes Soft****\n");

system("pause");
}
