#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define N 5
/*Elabore um programa que armazene os dados de um aluno, tais como: matricula, nome,
nota1, nota2, média e situação. Utilize Structs.*/
int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    printf("PROGRAMA: armazena os dados de um aluno. ");

    struct Aluno
    {
        char nome[50], curso[50];
        int semestre, idade,codigo,nota1,nota2,media;
    } cadastro[N];

    int i=0, codigo=0,continuar=1;
    cadastro[0].codigo=0;
    while(continuar)
    {
        i++;
        codigo++;
        cadastro[i].codigo = codigo;
        printf("\n\nCódigo[ %d ] ",cadastro[i].codigo);
        printf("\nNOME DO ALUNO:\t");
        fflush(stdin);
        gets(cadastro[i].nome);

        printf("IDADE :\t");
        fflush(stdin);
        scanf("%d", &cadastro[i].idade);

        printf("CURSO :\t");
        fflush(stdin);
        scanf("%d", &cadastro[i].curso);

        printf("SEMESTRE :\t");
        fflush(stdin);
        scanf("%d", &cadastro[i].semestre);

        printf("\nNOTA 1 :\t");
        fflush(stdin);
        scanf("%d", &cadastro[i].nota1);

        printf("NOTA 2 :\t");
        fflush(stdin);
        scanf("%d", &cadastro[i].nota2);
        cadastro[i].media=(cadastro[i].nota1+cadastro[i].nota2)/2;

        printf("Média %d \n",cadastro[i].media);
        printf("\nPara SAIR [0](ZERO)");
        printf("\nPara CONTINUAR digite [1](UM)");
        scanf("%d", &continuar);
    }
    return 0;
}
