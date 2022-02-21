#include <stdio.h>
#include <stdlib.h>
/*Sendo H = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N, faça um programa para calcular H. Sendo N um
número inteiro fornecido pelo usuário*/
int main(void)
{
float h, i, divisao, n;
printf("Digite um numero \n\t");
scanf("%f", &n);
    h=0;
    for (i=1;i<=n;i++)
    {divisao=1/i;
    printf("%1.2f + 1/%1.f = %.2f \n",h,i,h+divisao);
    h=h+divisao;
    }
}
