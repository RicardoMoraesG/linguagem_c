#include <stdio.h>
#include <stdlib.h>
int main(){
//teste switch
int n1,soma;
printf("Escolha um numero \n");
scanf("%d",&n1);
switch (n1){
case 1 : printf("escolheu 1\n");soma=1+1;printf("soma 1 + 1 = %d\n", soma);break;
case 2 : printf("escolheu 2\n");soma=2+1;printf("soma 2 + 1 = %d\n", soma);break;
case 3 : printf("escolheu 3\n");soma=3+1;printf("soma 3 + 1 = %d\n", soma);break;
case 4 : printf("escolheu 4\n");soma=4+1;printf("soma 4 + 1 = %d\n", soma);break;
default : printf("codigo nao cadastrado\n");
}
system("pause");


}
