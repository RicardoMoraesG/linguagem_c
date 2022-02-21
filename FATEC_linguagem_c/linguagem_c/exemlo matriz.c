#include<stdio.h>
#include<conio.h>
#include <time.h>
#include<locale.h>
#define N 5
int main (void )
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
  int matriz[N][N],i, j;

  printf ("\nDigite valor para os elementos da matriz\n\n");

  for ( i=0; i<N; i++ )
    for ( j=0; j<N; j++ )
    {
      matriz[ i ][ j ]= (rand()%50);
    }

  printf("\n\n******************* Saida de Dados ********************* \n\n");

  for ( i=0; i<N; i++ )
    for ( j=0; j<N; j++ )
    {
      printf ("[%d][%d] = %d ", i, j,matriz[ i ][ j ]);
    }

  getch();
  return(0);
}
