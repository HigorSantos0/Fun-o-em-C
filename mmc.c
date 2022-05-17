#include <stdio.h>

/*
QUEST�O 05: 
Fazer uma fun��o que calcule o MMC (m�nimo  m�ltiplo comum) entre dois n�meros. 
*/

int mmc (int a, int b)
{
	int i, maior, prod;
	
	if (a <= b)
	{
		maior = b;
	}
	else
		{
			maior = a;
		}
		
		prod = a * b;
		
		for (i = maior; i <= prod; i++)
		{
			if ((i % a == 0) && (i % b == 0))
			{
				return i;
			}
			
		}
		
	
	
}
void main ()
{
	int num1, num2, resposta;
	
	printf ("Entre com o valor de A:\n");
	scanf ("%d", &num1);
	
	printf ("Entre com o valor de B:\n");
	scanf ("%d", &num2);
	
	resposta = mmc (num1, num2);
	
	printf ("O mmc de (%d, %d) = %d\n", num1, num2, resposta);
}


