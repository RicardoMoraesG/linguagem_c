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

    printf ("Gerar matriz aleatoria e verificar a soma e media dos elementos da diagonal principal e secundaria\n\n");
    printf("Valor da constante : %d \n\n\n",N);

    int i,matriz[N][N],j, soma_pri=0,soma_sec=0,media_pri,media_sec;

    for ( i=0; i<N; i++ )
    {
        for ( j=0; j<N; j++ )
        {
            matriz[i][j] = (rand() % 50);
            if (matriz[i][j]==0)
                matriz[i][j]++;
            printf ("%3d ", matriz[ i ][ j ]);
        }
        printf("\n");
    }
    printf("\n\nDiagonal Principal : ");
    for ( i=0; i<N; i++ )
    {
        for ( j=0; j<N; j++ )
        {
            if (i==j)
            {
                printf("%2d ",matriz[i][j]);
                soma_pri += matriz[i][j];
            }
        }
    }
    media_pri = soma_pri / N;
    printf("\nSoma = %d", soma_pri);
    printf("\nMedia = %d",media_pri);

    printf("\n\nDiagonal Secundária : ");
    for ( j=0; j<N; j++ )
    {
        i=N-j-1;
        printf("%2d ",matriz[i][j]);
        soma_sec += matriz[i][j];
    }
    media_sec = soma_sec /N;
    printf("\nSoma = %d", soma_sec);
    printf("\nMedia = %d",media_sec);

    printf("\n\n\n");
    system("pause");
    printf("\nProgramado por <<<Ricardo de Moraes>>>\n");
}
