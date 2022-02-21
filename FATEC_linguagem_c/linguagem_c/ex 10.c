#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char nome[30];
float mens,cred,v_un;

    printf("\n Nome  \n\t");
        fflush(stdin);
        scanf("%s",nome);
    printf("\nCreditos:");
        fflush(stdin);
        scanf("%f",&cred);
    printf("\nValor unitario do credito\n\t");
        fflush(stdin);
        scanf("%f",&v_un);
    mens=cred*v_un;
    printf("Valor mensalidade: R$%5.2f",mens);
}
