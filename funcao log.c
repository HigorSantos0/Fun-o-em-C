/*QUESTÃO 04:
A função logarítmica é complementar à
potenciação. Ou seja, uma vez que 3
4 = 81,
podemos então afirmar que log381 = 4.
Generalizando, temos que:
baseexpoente = pot ? logbasepot = expoente
Com base nessa descrição, pede-se o
desenvolvimento de uma função que, dados a e
b, calcule o valor de logab.
Nota: a sua solução deverá apresentar um valor
inteiro que, na verdade, será a solução aproximada do
logaritmo.
*/

#include <stdio.h>

int baseexpoente (int base, int log)
{
	int i, cont = 0, valor;
	
	for (i = 1; i < log;)
	{
		i = i * base;
		printf ("%d ", i);
		cont++;
		
	}
	
	return cont;
}

void main ()
{
	int ba, log, resp;
	
	printf ("Entre com o valor da base:\n");
	scanf ("%d", &ba);
	
	printf ("Entre com o valor da log:\n");
	scanf ("%d", &log);
	
	resp = baseexpoente (ba, log);
	
	printf ("O valor da log de %d na base %d = %d\n", log, ba, resp);
	
	
	
}


