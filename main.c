#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

 setlocale (LC_ALL, "Portuguese");


    int num;

    printf("Escolha um n�mero\n");

    scanf ("%d", &num);

    if ((num%2==0 && num>10) || (num%2==1 && num<50))
        {
           printf ("SIM, o n�mero � par maior que 10 ou � impar menor que 50. \n");
        }
    else
        {
            printf ("N�o, o n�mero n�o atendeu �s condi��es l�gicas preestabelecidas. \n");
        }

    return 0;



}
