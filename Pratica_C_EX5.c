#include<stdio.h>
//Funcão com mais de um parametro, exemplo 1.

int funcao_retorno (int nume1, int nume2)
{
	return nume1*nume2;
}

void main ()
{
	int retorno, ex;
	
	printf("Valor para multiplicar com 5 da funcao: ");
	scanf("%d", &ex);
	
	retorno = funcao_retorno(ex,5);
	
	printf("Retorno da funcao: %d", retorno);
}
