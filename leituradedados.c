/*QUESTÃO 03:
Fazer uma função leituraDados que permaneça
lendo valores reais até que o número 0 seja
digitado. Ao final, a função deve determinar a
quantidade de elementos fornecidos (excluindo
o 0) e o maior dentre eles.
*/
#include <stdio.h>

int leituradedados(float num, int *cont, float *maior)
{
    int i = 1, quant = 0;

    do
    {
        if (num > 0)
        {
            printf ("Entre com os valores reais desejados:\n");
            scanf ("%f", &num);
            i++;

            if (num != 0)
            {
                
                quant++;
            }

            if (num > *maior)
            {
                *maior = num;
            }

            *cont = quant;
        }
    *cont = quant;

    }while(num != 0);
}
void main ()
{
    int contador; 
    float numero, maiorr, resp;

    leituradedados(numero, &contador, &maiorr);

    printf ("Quantidade de elementos = %d e o maior valor %.1f\n", contador, maiorr);

}