#include<stdio.h>
#include<stdlib.h>
#define N 4
int main(void){
int m[N][N], s=0, i,j;
printf ("digite os valores da matriz: ");
for (i=0; i <N; i++)
    scanf("%d", &m[i][j]);
for (j=0; j<N;j++)
    s += m [i] [j];
printf ("a soma dos elementos e = %d", s);
}
