#include <stdio.h>
int main(void)
{
    int a, b, x,y;
    printf("digite valor a");
    scanf("%d", &a);
    printf("digite valor b");
    scanf("%d", &b);
    printf("digite valor x");
    scanf("%d", &x);
    y=((2+a)/(b+3))-2*x;
    printf("o valor de y é: %d",y);
}
