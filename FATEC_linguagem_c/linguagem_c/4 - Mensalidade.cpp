#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int codigo, creditos;
    float total;
    char nome[40];
    char curso[10] = "";
    printf ("Digite o nome do aluno: ");
    scanf ("%s", nome);
    printf ("Digite o codigo do curso: ");
    scanf ("%i", &codigo);
    printf ("Digite o numero de creditos a serem cursados: ");
    scanf ("%i", &creditos);
    switch (codigo) {
           case 1 :
               total = creditos * 12;
               strcpy(curso,"PD");
               break;
           case 2 :
               total = creditos * 10;
               strcat(curso,"ADM");
               break;
           case 3 :
               total = creditos * 15;
               strcat(curso,"CONT");
               break;
           case 4 :
               total = creditos * 8;
               strcat(curso,"CIEN");
               break;
           default : printf ("Codigo nao cadastrado");
    }
    printf ("\n\nNome do aluno: %s \n", nome);
    printf ("Curso: %s \n", curso);
    printf ("Total a pagar: %3.2f \n\n", total);
    system ("pause");
}
