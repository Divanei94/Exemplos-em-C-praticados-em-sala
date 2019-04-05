#include<stdio.h>
// Função com operação e retorno dentro de uma função.
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
