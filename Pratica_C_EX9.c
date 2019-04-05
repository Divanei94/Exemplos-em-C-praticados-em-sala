#include<stdio.h>

int troca (int *val1, int *val2)
{
	int aux;
	
	aux = *val1;
	*val1 = *val2;
	*val2 = aux;
}

void main ()
{
	int valor1, valor2;
	
	printf("Digite dois valores para a troca: ");
	scanf("%d %d", &valor1,&valor2);
	
	printf("Antes da troca : %d -.- %d \n", valor1,valor2);
	
	troca(&valor1,&valor2);
	
	printf("\n Depois da troca: %d -.- %d", valor1, valor2);
}
