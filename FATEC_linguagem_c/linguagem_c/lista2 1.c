#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(void)
{
    setlocale (LC_ALL, "Portuguese");
    float h,peso_ideal;//h = altura
    int sexo;
    printf("Altura: \n \t");
    scanf("%f",&h);
    printf("Digite \n \t [1]Feminino \n \t [2]Masculino: \n\n");
    scanf ("%d",&sexo);
    if (sexo==1)
        peso_ideal=(62.1*h)-44.7;
    else
        peso_ideal=(72.7*h)-58;
    printf ("\n Peso ideal é: %5.2f \n",peso_ideal);
}
