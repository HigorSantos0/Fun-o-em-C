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

int baseexpoente (int base, int expoente)
{
	int i, valor = 1;
	
	for (i = 1; i <= expoente; i++)
	{
		valor = valor * base;
	}
	
	return valor;
}

void main ()
{
	int ba, exp, resp;
	
	printf ("Entre com o valor da base:\n");
	scanf ("%d", &ba);
	
	printf ("Entre com o valor do expoente:\n");
	scanf ("%d", &exp);
	
	resp = baseexpoente (ba, exp);
	
	printf ("O valor da log de %d sobre %d = %d\n", ba, exp, resp);
	
	
	
}


