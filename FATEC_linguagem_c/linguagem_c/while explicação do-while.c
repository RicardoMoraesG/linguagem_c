#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
char ch;
int tentativas;
do {
printf ("digite uma letra: ");
fflush (stdin);
ch = getchar();
tentativas = 1;
while ( ch != 't') {
printf ("%c eh incorreto \n", ch);
tentativas++;
printf ("tente novamente \n");
printf ("digite uma letra: ");
fflush (stdin);
ch = getchar();
}
printf ("%c eh correto\n", ch);
printf ("acertou em %d vezes\n", tentativas);
printf ("continua? (s/n):");
fflush (stdin);
ch = getchar();
} while (ch == 's');
system("pause");
}
