/*QUEST�O 05:
Fazer uma fun��o que exiba a tabuada de
pot�ncias de um n�mero n, no intervalo de 1 a
9. Se o n�mero n�o estiver neste intervalo, o
c�digo 0 deve ser retornado; caso contr�rio,
retorna-se 1.

Para ilustrar, abaixo � apresentada como a
tabuada de pot�ncias de 2 deveria ser exibida:
2^0 = 1
2^1 = 2
2^2 = 4
2^3 = 8
2^4 = 16
2^5 = 32
2^6 = 64
2^7 = 128
2^8 = 256
2^9 = 512
*/

#include <stdio.h>

int potenciadeN(int n)
{
	int pot, exp;
	
	
	if ((n < 1) || (n > 9))
	{
		return 0;
	}
	else
		{
			exp = 0;
			pot = 1;
			
			while(exp <= 9)
			{
				printf ("%d ^ %d = %d\n", n, exp, pot);
				
				exp++;
				pot = pot * n;
			}
			return 1;
		}
		
	 
}
void main ()
{
	int num, ret;
	
	printf ("Entre com o valor de N no intervalo de 1...9:\n");
	scanf ("%d", &num);
	printf ("\n");
	
	ret = potenciadeN(num);
	
	if (ret == 0)
	{
		printf ("%d");	
	}	
}
