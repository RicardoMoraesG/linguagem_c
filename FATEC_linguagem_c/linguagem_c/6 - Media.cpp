#include <stdio.h>
#include <stdlib.h>

float media(float v1, float v2, float *maior);

int main() {
	float med, x,y,ma ;
	printf ("\n\nDigite o primeiro valor ->  ");
    scanf("%f",&x);
	printf ("\n\nDigite o segundo valor ->  ");
    scanf("%f",&y);

    med=media(x,y,&ma);
    printf ("\n\nMaior valor -> %2.2f; Media -> %2.2f\n\n",ma, med);
    system ("pause");
}

float media(float v1, float v2, float *maior)
{
    if (v1>v2)
      *maior=v1;
    else
      *maior=v2;

    return (v1+v2)/2;
}
