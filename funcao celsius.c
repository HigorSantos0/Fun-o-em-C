#include <stdio.h>

/*
Desenvolver uma fun��o que calcule o n-�simo termo da sequ�ncia de Fibonacci. 
*/

int farenheit (int celsius)
{
	int f;
	
	
	f = 1.8*celsius+32;	
	
	return f;
}

void main ()
{
	int c, resposta;
	
	printf ("Entre com o numero do termo:\n");
	scanf ("%d", &c);
	
	resposta = farenheit(c);
	
	printf ("Graus Celsius = %d e farenheit = %d\n", c, resposta);
	
}
