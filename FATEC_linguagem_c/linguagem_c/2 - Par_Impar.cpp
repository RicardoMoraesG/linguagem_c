#include <stdio.h>
#include <stdlib.h>


int parimpar(int x);
int main()
{
	int num;

	printf ("Digite um numero inteiro: ");
	scanf ("%d", &num );

	if (parimpar(num))
	   printf ("Par\n\n");
    else
	   printf ("Impar\n\n");
    system ("pause");
}

int parimpar(int x)
{
    if (x%2==0)
      return 1;
    else
     return 0;
}
