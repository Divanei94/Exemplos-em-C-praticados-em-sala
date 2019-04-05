#include<stdio.h>

int fatorial (int num)
{
	int i,fator;
	fator = 1;
	
	for (i=1;i<=num;i++)
	fator*=i;
	
	return fator;
}

void main ()
{
	int entrada;
	
	printf("Digite o numero para fatorar: ");
	scanf("%d", &entrada);
	
	printf("Fatorial do numero %d -> %d", entrada, fatorial(entrada));

}
