#include <stdio.h>

/* 
QUEST�O 04: 
Fazer uma fun��o que calcule o MDC (m�ximo  divisor comum) entre dois n�meros. 
*/

int mdc (int a, int b)
{
	int menor, i, resposta;
	
	if (a <= b)
	{
		menor = a;
	}
	else
		{
			b = menor;	
		}
		
		for (i = 1; i <= menor; i++)
		{
			if ((a % i == 0)&&(b % i == 0))
			{
				resposta = i;
			}
		}
	
	return resposta;
}

void main ()
{
	int num1, num2, resp;
	
	printf ("Entre com o valor de A:\n");
	scanf ("%d", &num1);
	
	printf ("Entre com o valor de B:\n");
	scanf ("%d", &num2);
	
	resp = mdc(num1, num2);
	
	printf ("O mdc de (%d - %d) = %d\n", num1, num2, resp);
}








