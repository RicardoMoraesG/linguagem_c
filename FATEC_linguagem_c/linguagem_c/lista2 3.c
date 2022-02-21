#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(void)
{
        setlocale (LC_ALL, "Portuguese");
    float venda, salario;
    printf("Venda: \n \t R$ ");
    scanf("%f", &venda);
    if (venda >= 20000)
        salario = venda*0.1;
    else
        salario = venda*0.075;
    printf("\n \t Salario R$%5.2f", salario);
    printf("\n\n\n********************************** \nDesenvolvido por Ricardo de Moraes \n**********************************");
}
