#include<stdio.h>

int troca (int *val1, int *val2)
{
	int aux;
	
	if(*val2 < *val1){
		aux = *val1;
		*val1 = *val2;
		*val2 = aux;
	}
	return 0;
}

void main ()
{
	int i, j, vetor[9];
	
	printf("Digite os valores para o vetor: \n");
	for (i=0;i<9;i++){
		printf("%d - ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	//Valores antes de ordenar
	printf(" Valores digitados: ");
	for (i=0;i<9;i++)
	printf("%d ", vetor[i]);
	
	//Ordenacao do vetor	
	for (i=0;i<9;i++)
	for (j=i+1;j<9;j++)
	troca(&vetor[i],&vetor[j]);
	
	//Vetor ordenado
	printf("\n Valores ordenados: ");
	for (i=0;i<9;i++)
	printf("|%d|", vetor[i]);
}
