#include <stdio.h>

/*
Desenvolver uma função que calcule o n-ésimo termo da sequência de Fibonacci. 
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
