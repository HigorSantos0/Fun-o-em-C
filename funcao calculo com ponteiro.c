/*QUESTÃO 09: 
Implementar uma função que, dado um  número inteiro, calcule (e retorne) a soma e a  média de seus divisores.
*/
#include <stdio.h>

int calculo (int num, int *soma, float *media)
{
	int som = 0, i, cont = 0;
	float med;
	
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			som += i;
			cont++;
		}
	}
	
	med = (float)som / cont;
	
	*soma = som;
	*media = med;
	
}
void main ()
{
	int numero, somatorio;
	float medias;
	
	printf ("Entre com o valor:\n");
	scanf ("%d", &numero);
	
	calculo (numero, &somatorio, &medias);
	
	printf ("A soma = %d e a media = %.2f\n", somatorio, medias);
	
	
}
