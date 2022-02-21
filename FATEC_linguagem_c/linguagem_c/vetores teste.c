#include<stdio.h>
#include<stdlib.h>
int main()
{
  float notas [5], s=0, med;
  int i;
  printf("Digite as notas dos alunos: ");
  for (i=0; i<5; i++)
        scanf ("%f", &notas[i]);
  for (i=0; i<5; i++)
        s  += notas [i];
  med = s/5;
  printf("A media das notas = %3.2f" , med);
}
