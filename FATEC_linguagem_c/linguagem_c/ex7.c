#include <stdio.h>
#include <stdlib.h>
/*Sabendo que os argumentos da fun��o "printf" podem ser express�es (a+b, a/b, a*b...), e n�o
somente argumentos, fa�a um programa capaz de ler um valor inteiro X e escrever seu triplo, seu
quadrado, e seu meio.
*/
int main(void)
{
    int x;
    printf("digite um valor\n\t\t");
        scanf("%d",&x);
    printf("\n\t TRIPLO: %d", x*3);
    printf("\n\t QUADRADO: %d", x*x);
    printf("\n\t MEIO %d", x/2);


    printf("\n\n\n****Desenvolvido por RicardoMoraes Soft****\n");

system("pause");

}
