#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
/*Escreva um algoritmo que preencha um vetor de 50 posi��es com n�meros inteiros pares
sucessivos come�ando em 10.*/
setlocale(LC_ALL, "Portuguese");
int par, i, vetor[50];
for ((i=10)&&(par=0);par<50;i++)
if (i%2==0){
    par++;
    vetor[par]=i;
    printf("\n%3d� par da sequ�ncia vale %3d  ", par, i);
}
printf("\n\n");
system("pause");
}
