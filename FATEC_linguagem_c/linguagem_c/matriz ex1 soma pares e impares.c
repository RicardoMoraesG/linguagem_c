/*Faça um programa que monte uma matriz randômica A10x10 e verifique quantos números
pares e quantos impares existem na matriz.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <conio.h>
#define N 10

int main()
{
    setlocale (LC_ALL,"Portuguese");
    srand (time(NULL));

    printf("Programa que monta uma matriz randômica A10x10 e verifique quantos números pares e quantos impares existem na matriz\n");
    printf("Valor da constante : %d \n\n\n\n",N);

    int i,matriz[N][N],j, soma_par=0,soma_impar=0;

    for ( i=0; i<N; i++ )
    {
        for ( j=0; j<N; j++ )
        {
            matriz[i][j] = (rand() % 50);
            printf ("%3d ", matriz[ i ][ j ]);
            if (matriz[i][j] % 2 == 0)
            {
                soma_par++;
            }
            else
            {
                soma_impar++;
            }
        }
        printf("\n");
    }
    printf("\nQuantidade de Pares: %d", soma_par);
    printf("\nQuantidade de impares: %d", soma_impar);
    printf("\n\n\n");
    system("pause");
    printf("\nProgramado por <<<Ricardo de Moraes>>>\n");
}
