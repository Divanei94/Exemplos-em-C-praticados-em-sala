#include<stdio.h>
// Fun��o com opera��o e retorno dentro de uma fun��o.
int quadrado (int nume)
{
	printf("O quadrado do numero %d eh -> %d", nume,(nume*nume));
	
	return 0;
}

void main ()
{
	int numero;
	
	printf("Digite um numero a ser dobrado: ");
	scanf("%d", &numero);
	
	quadrado(numero);
	
}
