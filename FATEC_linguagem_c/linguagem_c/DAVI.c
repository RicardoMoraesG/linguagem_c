#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int numero;
printf("escolha um numero\n");
while (numero!=10){
scanf("%d",&numero);

switch (numero){
case 1: {printf("DAVI BOB�O\n");break;}
case 2: {printf("DAVI ESPERTO\n");break;}
case 3: {printf("DAVI HER�I\n");break;}
case 4: {printf("DAVI, CARA DE SACI\n");break;}
case 5: {printf("DAVI, COME ABACAXI\n");break;}
case 6: {printf ("DAVI, VAII FAZER XIXI\n");break;}
case 7: {printf("DAVI, S� FALA MIMIMI\n");break;}
case 8: {printf("DAVI FORT�O QUE NEM SANS�O\n");break;}
case 9: {printf("DAVI, PODE IR DORMIR\n");break;}
case 0: {printf("DAVI, PAPA AT� O FIM\n");break;}}
}
}
