#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

 setlocale (LC_ALL, "Portuguese");


    int num;

    printf("Escolha um número\n");

    scanf ("%d", &num);

    if ((num%2==0 && num>10) || (num%2==1 && num<50))
        {
           printf ("SIM, o número é par maior que 10 ou é impar menor que 50. \n");
        }
    else
        {
            printf ("Não, o número não atendeu às condições lógicas preestabelecidas. \n");
        }

    return 0;



}
