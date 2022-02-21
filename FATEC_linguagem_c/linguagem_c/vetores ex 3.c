#include <stdio.h>
#include <stdlib.h>
int main (){
/*Elabore um programa que leia 2 vetores de 10 números inteiros cada e em seguida calcule e
imprima um terceiro vetor formado pela soma dos valores respectivos dos vetores lidos.*/
int A[10],B[10],C[10],i,a,b,c;
    printf("\nDigite os valores dos vetores: \n");
    for (i=0;i<10;i++){
        printf("\n%d vetor A: \n", i+1);
            scanf("%d", &A[i]);
        printf("\n%d vetor B: \n", i+1);
            scanf("%d", &B[i]);
        C[i]=A[i]+B[i];}
        printf("\nSomas dos vetores: \n");
    for (i=0;i<10;i++)
    printf("%d Soma = %d + %d = %d \n", i+1, A[i], B[i],C[i]);
}
