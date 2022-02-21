#include <stdio.h>
#include <stdlib.h>
int main(){
int num,soma;
printf("escolha um numero de 1 a 4\n\t");
fflush(stdin);
scanf("numero", &num);
switch (num){
    case 1:
        soma = 50+50;
        printf("\n escolheu 1 : 50 + 50 = %d",soma);
        break;
    case 2 :
        soma = 50+100;
        printf("\n escolheu 2 : 50 + 100 = %d", soma);
        break;
    case 3 :
        soma = 50 +150;
        printf("\n escolheu 3: 50 + 150 = %d", soma);
        break;
    case 4 :
        soma = 50 + 200;
        printf("\n escolheu 4 : 50 + 200 = %d", soma);
        break;
    default : printf("codigo nao cadastrado\n\n\n");
    }
    system("pause");
}
