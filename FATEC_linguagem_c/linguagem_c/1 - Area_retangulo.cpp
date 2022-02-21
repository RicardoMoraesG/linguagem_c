#include <stdio.h>
#include <stdlib.h>

float arearet(float x, float y);
int main()
{
	float base, altura, area;

	printf ("Digite o valor da base: ");
	scanf ("%f", &base );

	printf ("Digite o valor da altura: ");
	scanf ("%f", &altura);

	area = arearet(base,altura);
	printf("\n\nA area e %3.2f\n\n",area);

    system ("pause");
}

float arearet(float x, float y)
{
    float resp;
    resp = x*y;
	return resp;
}
