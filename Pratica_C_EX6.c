#include<stdio.h>

int soma_dobro (int nume1, int nume2)
{
	int soma;
	
	nume1 = nume1 * 2;
	nume2 =  nume2 * 2;
	soma = nume1 + nume2;
	
	return soma;
}

void main ()
{
	int entrada1, entrada2, retorno;
	
	printf("Digite dois numeros para a funcao retornar a soma do dobro: ");
	scanf("%d", &entrada1);
	scanf("%d", &entrada2);
	
	retorno = soma_dobro (entrada1,entrada2);
	
	printf("Retorno da funcao: %d", retorno);
}
