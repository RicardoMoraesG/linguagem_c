#define N 4
int main(void) {
int m[N][N], s=0,i,j;
printf("Digite os valores da matriz:");
for (i=0; i<N; i++)
for (j=0; j<N; j++)
scanf ("%d", &m[ i ][ j ]);
for (i=0; i<N; i++)
for (j=0; j<N; j++)
s += m [ i ] [ j ];
printf ("A soma dos elementos é = %d" , s);
}
