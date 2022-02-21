#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define L 2
#define C 3
int main()
{

    srand(time(NULL));//rand()% 20;
    setlocale(LC_ALL, "Portuguese");

    printf("\nPrograma que entre com valores inteiros para uma matriz C2x3");
    printf("\nGera e imprime a Matrix. A “matriz transposta” é gerada trocando linha por coluna.\n\n");

    int matriz[L][C],i,j;

    printf("\nMatrix: \n");
    for (i=0; i<L; i++)
    {
        for (j=0; j<C; j++)
        {
            matriz[i][j] = rand()% 10;
           // if (matriz[i][j]==0)
           //     matriz[i][j]++;
            printf("%2d ",matriz[i][j]);
        }
        printf("\n");
    }
    //(i0 j0) (i1 j0)
    //(i0 j1) (i1 j1)
    //(i0 j2) (i1 j2)
    printf("\n\nMatriz Transposta: \n");
    for (i=0; i<C; i++)
    {
        for (j=0; j<L; j++)
        {
            printf("%2d ", matriz[j][i]);
        }
        printf("\n");
    }

    printf("\n");
    system("pause");
    printf("programado por <<Ricardo de Moraes>>");
    printf("\n");
}
