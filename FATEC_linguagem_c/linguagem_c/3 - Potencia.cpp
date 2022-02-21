#include <stdio.h>
#include <stdlib.h>

int elevado (int b, int e);
int main()
{
	int base, exp, total;

	printf ("Digite os valores para calcular uma potencia, base e expoente\n\n");
    printf ("Digite o valor da base: ");
	scanf ("%d", &base);
    printf ("Digite o valor do expoente: ");
	scanf ("%d", &exp );
    total=elevado(base,exp);
    printf("\nResultado %d\n\n",total);

    system ("pause");
}

int elevado (int b, int e)
{
    int i,r=1;
    if (e==0)
       return 1;
    for (i=1;i<=e;i++)
       r = r*b;
    return r;
}
