#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define N 5

int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    printf("Soma das matrizes A5x5 e B5x5 preenchidas randomicamente, gera a matriz C = A + B \n");
    system("pause");

    int i,j, matriz[N][N],matrizb[N][N];

    printf("\nMATRIZ A \n");
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            matriz[i][j]= rand()% 50;
            if (matriz[i][j]==0)
                ;
            matriz[i][j]++;
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMATRIZ B \n");
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            matrizb[i][j]= rand()% 50;
            if (matrizb[i][j]==0)
                matrizb[i][j]++;
            printf("%2d ", matrizb[i][j]);
        }
        printf("\n");
    }
    printf("\nSOMA DAS MATRIZES \n");
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            printf("%2d ", matriz[i][j]+matrizb[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    system("pause");
    printf("\nProgramado por <<<Ricardo de Moraes>>>\n");

}
