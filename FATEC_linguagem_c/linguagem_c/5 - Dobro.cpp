#include <stdio.h>
#include <stdlib.h>

int dobro( int *valor);
int main() {
	int x ;
	printf ("\n\nDigite um valor ->  ");
    scanf("%d",&x);
    dobro(&x);
    printf ("\n\nO dobro do valor digitado e -> %d\n\n",x);
    system ("pause");
}

int dobro( int *valor)
{
    *valor = *valor * 2;
}
