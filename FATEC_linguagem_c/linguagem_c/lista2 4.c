#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(void)
{
        setlocale (LC_ALL, "Portuguese");
    int codigo, credito;
    printf("\n Digite o codigo do curso: \n \t [1] PD \n \t [2] ADM \n \t [3] CONTAB \n \t [4] CIENCIAS \n");
    scanf("%d", &codigo);
    printf("\n quantidade de creditos: \n");
    scanf("%d", &credito);
    switch (codigo)
    {
        case 1 :            printf("Curso PD, Valor da Mensalidade: R$ %d \n", 12*credito);
        break;
        case 2 :            printf("Curso ADM, Valor da Mensalidade: R$ %d \n", 10*credito);
        break;
        case 3 :            printf("Curso CONTABEIS, Valor da Mensalidade: R$ %d \n", 15*credito);
        break;
        case 4 :            printf("Curso CIENCIAS, Valor da Mensalidade: R$ %d \n", 8*credito);
        break;
        default ("\n Digite um valor valido");
    }
    printf("\n\n\n********************************** \n Desenvolvido por Ricardo de Moraes \n**********************************");
}
