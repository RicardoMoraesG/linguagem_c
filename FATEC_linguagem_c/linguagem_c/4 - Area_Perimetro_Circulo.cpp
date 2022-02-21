#include <stdio.h>
#include <stdlib.h>

int elevado (int b, int e);
float circulo (float raio, int tipo);

int main()
{
	float raio;
	float ac, pc;

	printf ("Digite o raio do circulo: ");
	scanf ("%f", &raio );
	
	ac=circulo(raio,0);
	pc=circulo(raio,1);
	
    printf("\n\nResultado Area-> %3.2f  Perimetro -> %3.2f",ac,pc);
    printf("\n\n\n");

    system ("pause");
}

int elevado (int b, int e)
{
    int i,r=1;
    if (e==0)
       return 1;
    for (i=1;i<=e;i++)
       r*=b;
    return r;
}

float circulo (float raio, int tipo)
{
    float c;
    if (tipo==0) //calculo da area
    { 
    	c = 3.14*elevado(raio,2);
	}
    else //calculo do perimetro
    {
        c=2*3.14*raio;
    }
    return c;
}
