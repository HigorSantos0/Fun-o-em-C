/*QUESTÃO 05:
Fazer uma função que exiba a tabuada de
potências de um número n, no intervalo de 1 a
9. Se o número não estiver neste intervalo, o
código 0 deve ser retornado; caso contrário,
retorna-se 1.

Para ilustrar, abaixo é apresentada como a
tabuada de potências de 2 deveria ser exibida:
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
