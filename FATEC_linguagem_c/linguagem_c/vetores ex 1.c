#include <stdio.h>
#include <stdlib.h>
int main (){
printf("um programa que leia um vetor de 10 números inteiros e calcule e mostre o maior e o menor elemento do vetor");
int numero[10],i,menor=9999, maior=0;
printf("\n digite os numeros \n");
for (i=0;i<10;i++){
    scanf("%d",&numero[i]);
if (numero[i] < menor)
    menor = numero[i];
if (numero[i] > maior)
    maior = numero[i];}
printf("menor %d ", menor);
printf("maior %d ", maior);
}
