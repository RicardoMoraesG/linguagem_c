#include <stdio.h>
#include <stdlib.h>

int main(){
    int codigo;
    float sbase, snovo, tempo, aumento;
    char nome[40];
    printf ("Digite o nome do funcionario: ");
    scanf ("%s", nome);
    printf ("\nDepartamentos\n");
    printf ("1 - Secretaria\n");
    printf ("2 - Tesouraria\n");
    printf ("3 - Depto. Pessoal\n");
    printf ("4 - Almoxarifado\n\n");
    printf ("Digite o codigo do departamento: ");
    scanf ("%i", &codigo);
    printf ("Digite o tempo de servico: ");
    scanf ("%f", &tempo);
    printf ("Digite o salario base: ");
    scanf ("%f", &sbase);
    switch (codigo) {
           case 1 :
// para utilizar o switch case com o intervalo de opcoes de 1 a 2, nao e necessario digitar os comandos abaixo
//                    if (tempo <= 4) aumento = 0.5;
//                    if (tempo > 4) aumento = 0.6;
//                    break;
           case 2 :
                    if (tempo <= 4) aumento = 0.5;
                    if (tempo > 4) aumento = 0.6;
                    break;
           case 3 : aumento = 0.3; break;
           case 4 :
                    if (tempo < 2) aumento = 0.3;
                    if ((tempo >=2) && (tempo <=4)) aumento = 0.4;
                    if (tempo > 4) aumento = 0.5;
                    break;
           default : printf ("Codigo nao cadastrado");
    }
    printf ("\n\nNome do funcionario: %s \n", nome);
    printf ("Salario antigo: %3.2f \n", sbase);
    snovo = sbase + (sbase * aumento);
    printf ("Valor do aumento: %3.2f \n", snovo - sbase);
    printf ("Salario novo: %3.2f \n\n", snovo);
    system ("pause");
}
