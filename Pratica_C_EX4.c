#include<stdio.h>
//Função com mais de um parametro com retorno dentro da função.

float multiplicacao (float nume1, float nume2, float nume3)
{
	printf("A multiplicacao eh igual a -> %.3f", (nume1*nume2*nume3));
	
	return 0;
}

void main ()
{
	float um,dois,tres;
	
	um = 1.5;
	dois = 2.5;
	tres = 3.5;
	
	multiplicacao(um,dois,tres);
}
