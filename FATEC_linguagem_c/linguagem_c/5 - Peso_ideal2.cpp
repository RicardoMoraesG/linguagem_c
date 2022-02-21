#include <stdio.h>
#include <stdlib.h>

int main(){
    float peso, altura;
    int idade;
    char sexo;
    printf ("Digite altura: ");
    scanf ("%f", &altura);
    printf ("Digite idade: ");
    scanf ("%i", &idade);
    printf ("Digite sexo (M/F): ");
    fflush (stdin);
    scanf ("%c", &sexo);
    if (sexo == 'M')
       if (altura > 1.70)
       {
          if (idade <= 20)
             peso = (72.7 * altura) - 58;
          else
              peso = (72.7 * altura) - 45;                        
       }
       else // altura <= 1.70
       {
          if (idade <= 40)
             peso = (72.7 * altura) - 50;
          else
              peso = (72.7 * altura) - 58;                        
       }
    else // sexo = f
    {
       if (altura > 1.50)
          peso = (62.1 * altura) - 44;
       else // altura <= 1.50
       {
          if (idade >= 35)
             peso = (62.1 * altura) - 45;
          else
              peso = (62.1 * altura) - 49;                        
       }
    }
    printf ("Peso ideal = %3.2f \n", peso);
    system ("pause");
}
