#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
/*Escreva um algoritmo que preencha um vetor de 50 posições com números inteiros pares
sucessivos começando em 10.*/
setlocale(LC_ALL, "Portuguese");
int par, i, vetor[50];
for ((i=10)&&(par=0);par<50;i++)
if (i%2==0){
    par++;
    vetor[par]=i;
    printf("\n%3dº par da sequência vale %3d  ", par, i);
}
printf("\n\n");
system("pause");
}
