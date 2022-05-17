#include <stdio.h>

/*
Desenvolver uma função que calcule o n-ésimo termo da sequência de Fibonacci. 
*/

int fibonnaci (int n)
{
	int i, ptermo, segtermo, total;
	
	if (n == 1)
	{
		total = 0;
	}
	else
		{
			if (n == 2)
			{
				total = 1;
			}
			else
				{
					ptermo = 0;
					segtermo = 1;
					
					for (i = 3; i <= n; i++)
					{
						
						total = ptermo + segtermo;
						ptermo = segtermo;
						segtermo = total;
					}
				}
				
		}
	return total;

}

void main ()
{
	int termo, resp;
	
	printf ("Entre com o termo:\n");
	scanf ("%d", &termo);
	
	resp = fibonnaci (termo);
	
	printf ("O valor do termo = %d\n", resp);
	
}
