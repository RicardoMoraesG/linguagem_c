#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define N 5

int main(){
    setlocale (LC_ALL, "Portuguese");
    srand(time(NULL));

    printf("Preenche uma matriz de 5x5\n");
    printf("e imprima de acordo com o desejo do usuário:\n");
    printf("o triângulo de cima ou o triângulo de baixo da diagonal principal.\n\n");
    system("pause");

    int i,j,matriz[N][N],escolha,repete=1;

    printf("Matriz Completa:\n\n");
    for (i=0;i<N;i++){
        for (j=0;j<N;j++){
            matriz[i][j] = rand()% 20;
            if (matriz[i][j]==0 ){
                matriz[i][j]++;
            }
            printf("%2d ",matriz[i][j]);
        }
    printf("\n");
    }

    while(repete==1){
        printf("\nQual Triangulo deseja mostrar?\n");
        printf("Superior [1]\n");
        printf("Inferior [2]\n");
        scanf("%d",&escolha);

        switch (escolha){
            case 1: {
                printf("\nTriangulo Superior: \n\n");
                for (i=0;i<N;i++){
                    for (j=i;j<N;j++){
                            printf("%2d ",matriz[i][j]);
                    }
                    printf("\n");
                }
                break;
            }
            case 2:{
                printf("\nTriangulo inferior: \n\n");
                for (i=0;i<N;i++){
                    for (j=0;j<N-i;j++){
                        printf("%2d ",matriz[i][j]);
                    }
                printf("\n");
                }
                break;
            }
        }//fim switch
        printf("Pressione [1] para repetir ou qualquer outra tecla para parar");
        scanf("%d", &repete);
    }//fim while


    printf("\n\n");
    system("pause");
    printf("programado por <<<Ricardo de Moraes>>>");
}
