#include <stdio.h>
#define LIM 50
#define LIM_FGETS 52

void Cuenta_Caracteres (char palabra[LIM]);

int main()
{
	char palabra[LIM];
	printf("Hola, por favor ingrese una palabra: ");
	fgets(palabra, LIM_fgets, stdin);
	for(int l = 0; l<LIM; l++){
	    if (palabra[l] == 10){
	        palabra[l] = '\0';
	    }
	}
	Cuenta_Caracteres (palabra);
	return 0;
}

void Cuenta_Caracteres (char palabra [LIM])
{
	int i;
	for (i = 0; i < LIM; i++)
	{
		if (palabra[i] == '\0')
		{
			break;
		}
	}
	printf("%s tiene %d caracteres",palabra, i);
}
