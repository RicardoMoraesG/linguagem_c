#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL,"Portuguese");
	float peso, altura;
    char sexo;
    printf ("Digite altura: ");
    scanf ("%f", &altura);
    printf ("Digite sexo (M/F): ");
    fflush (stdin);
    scanf ("%c", &sexo);
    if (sexo == 'M')
       peso = (72.7 * altura) - 58;
    else
        peso = (62.1 * altura) - 44.7;
    printf ("Peso ideal é %3.2f \n", peso);
    system ("pause");
}
