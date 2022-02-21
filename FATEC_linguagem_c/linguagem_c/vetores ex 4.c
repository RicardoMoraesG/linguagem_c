#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (){
/*Elabore um programa que leia um vetor capaz de armazenar 20 valores inteiros e, em
seguida, gere outros dois vetores, um formado pelos valores pares e o outro pelos valores
ímpares.*/
setlocale(LC_ALL, "Portuguese");
int vetor[20],impar[20],par[20],i;

printf("digite um numero: \n");
    for (i=0;i<20;i++){
        scanf("%d",&vetor[i]);
            if (vetor[i]%2==0){
                par[i]=vetor[i];
                impar[i]=0;
                printf("O %dº é par = %d \n\n", i+1, par[i]);
            }
            else{
                impar[i]=vetor[i];
                par[i]=0;
                printf("O %dº é impar = %d \n\n", i+1, impar[i]);
            }
    }
    system ("pause");
    for (i=0;i<20;i++){
        printf("%2dº Vetor = %2d [par = %2d ] [impar = %2d ]\n",i+1,vetor[i],par[i],impar[i]);
    }
    printf("\n");
    system ("pause");
}
