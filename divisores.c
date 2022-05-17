/*
QUESTÃO 07: 
Implementar uma função que, dado um  número inteiro n, 
e o intervalo definido pelos  números a e b,
 determine quantos valores do  intervalo possuem divisores 
 (sendo estes  diferentes de 1) que também sejam divisores  de n. 
Exemplo: 
n = 6 
a = 10 e b = 20 
Resposta = 7 (pois os números 10, 12, 14,  15, 16, 18 e 20 possuem divisores em  comum com o número 6). 
*/

#include <stdio.h>

int divisores(n, a, b)
{
	int i, j, divisores = 0, contador = 0;
	
	for (i = a; i <= b; i++)
	{
		divisores = 0;
		
		for (j = 2; j <= i; j++)
		{
			if ((i % j == 0)&&(n % j == 0))
			{
				divisores++;
			}
		}
		if (divisores > 0)
		{
			contador++;
		}
		
	}
	return contador;
}

void main ()
{
	int num, valorA, valorB, resp;
	
	printf ("Entre com o valor:\n");
	scanf ("%d", &num);
	
	printf ("Entre com o valor A:\n");
	scanf ("%d", &valorA);
	
	printf ("Entre com o valor B:\n");
	scanf ("%d", &valorB);
	
	
	resp = divisores(num, valorA, valorB);
	
	printf ("Numero de divisores entre %d e %d = %d\n", valorA, valorB, resp);
}
