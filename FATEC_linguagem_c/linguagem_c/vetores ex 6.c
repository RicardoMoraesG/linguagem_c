#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    int A[10], i, j;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite um n�mero: \n");
    for (i=0;i<10;i++){
        scanf("%d", &A[i]);
        printf("O valor de A �: %d \n", A[i]);
    }
}
