/*
	Hacer el algoritmo que nos permita contar los múltiplos de 3
	desde la unidad hasta un número que introducimos por teclado 

	>>> TERMINADO <<<
*/

#include <stdio.h>

void Multiplos_3 (int limite, char impresion);

int main()
{
	int limite, basura;
	char impresion;
	printf("\nBienvenido a nuestro programa...\n");
	printf("Ingrese un numero mayor a 0 para calcular los multiplos de 3 hasta ese numero\n>>> ");
	scanf("%d", &limite);
	printf("Desea ver la impresion en forma de LISTA o en CADENA? [L/C]\n>>> ");
	scanf("%d", &basura);		// Sustituacion a __fpruge()
	scanf("%c", &impresion);
	Multiplos_3 (limite, impresion);
    return 0;
}

void Multiplos_3 (int limite, char impresion)
{
	int multiplos[limite];
	printf("Multiplos de 3 hasta el %d\n", limite);
	if ((impresion == 'l') || (impresion == 'L'))
	{
		for (int i = 0; i <= limite; i++)
		{
			multiplos[i] = i * 3;
			if (multiplos[i] > limite)
			{
		    	break;
			}
		printf("- %d\n", multiplos[i]);
		}
	}
	else if ((impresion == 'c') || (impresion == 'C'))
	{
		printf("| ");
		for (int i = 0; i <= limite; i++)
		{
			multiplos[i] = i * 3;
			if (multiplos[i] > limite)
			{
			    break;
			}
		printf("%d | ", multiplos[i]);
		}
	}
}


