/*QUEST?O 06: 
Implementar uma fun??o que, dado um  n?mero inteiro N, exiba uma sequ?ncia de  n?meros como as ilustradas nos exemplos a  seguir: 
Exemplo 1: N = 3 
(1 2) (1 3) (2 1) (2 3) (3 1) (3 2) 
Exemplo 2: N = 5 
(1 2) (1 3) (1 4) (1 5) (2 1) (2 3) (2 4) (2 5) (3 1)
(3 2) (3 4) (3 5) (4 1) (4 2) (4 3) (4 5) (5 1) (5 2) (5  3) (5 4) 

*/

#include <stdio.h>

int conjuntos(int num)
{
	int i, j;
	
	
	
		for (i = 1; i <= num; i++)
		{
			for (j = 1; j <= num; j++)
			{
				if (i != j)
				{
					printf ("(%d %d)", i, j);	
				}
				
			}
			
		}
	
	
}
void main ()
{
	int numero;
	
	printf ("Entre com o valor desejado:\n");
	scanf ("%d", &numero);
	
	conjuntos(numero);
	
}
