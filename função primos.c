/*
QUEST�O 08: 
Desenvolver uma fun��o que exiba todos os  n�meros primos inferiores a determinado valor  inteiro N. 
*/
#include <stdio.h>

int primos (int num)
{
	int i, j, soma;
	
	for (i = 2; i <= num; i++)
	{
		soma = 0;
		
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				soma++;
			}
		}
		
		if (soma == 2)
		{
			printf ("%d ", i);
		}
	}
}
void main ()
{
	int numero;
	
	printf ("Entre com o valor inteiro:\n");
	scanf ("%d", &numero);
	
	primos(numero);
}
