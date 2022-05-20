#include <stdio.h>

/*QUESTÃO 01:
QUESTÃO 01:
Desenvolver uma função que, dado um número
inteiro n, exiba todos os números existentes no
intervalo definido por a e b (a < b), exceto
aqueles que forem múltiplos de n.
*/

int multiplosden(int n, int a, int b)
{
    int i; 

    if (a < b)
    {

        for (i = a; i <= b; i++)
        {
            if (i % n != 0)
            {
                printf ("%d ", i);
            }
        }
    }
}

void main ()
{
    int num, n1, n2;

    printf ("Entre com o intervalo de A:\n");
    scanf ("%d", &n1);

    printf ("Entre com o intervalo de B:\n");
    scanf ("%d", &n2);

    printf ("Entre com o valor de N:\n");
    scanf ("%d", &num);

    multiplosden(num, n1, n2);



}