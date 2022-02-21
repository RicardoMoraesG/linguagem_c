#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valUnicred, valorMensalidade;
    int creditos;
    char nome[20];
    printf("Escreva o nome do aluno \n");
    fflush(stdin);
    scanf("%s", nome);
    printf("Escreva o numero de creditos \n");
    fflush(stdin);
    scanf("%d", &creditos);
    printf("Escreva o valor unitario dos creditos \n");
    fflush(stdin);
    scanf("%f", &valUnicred);

    valorMensalidade = creditos * valUnicred;

    printf("\n\nAluno: %s \nValor mensalidade: R$%.2f \n\n\n\n\n", nome, valorMensalidade);
    system("pause");
}
