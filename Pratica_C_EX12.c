//Escrever um programa que leia as medidas dos três lados a,b e c de um paralelepípedo, calcule e escreva o valor de sua diagonal
//Função com passagem de dois parâmetros com retorno de valor
#include<stdio.h>
#include<math.h>

float hipotenusa (float valorA, float valorB)
{
	return (sqrt((valorA * valorA) + (valorB * valorB)));
}
void main()
{
	float ladoA,ladoB,ladoC,diagonal;
	
	printf("Digite o lado A: ");
	scanf("%f", &ladoA);
	
	printf("Digite o lado B: ");
	scanf("%f", &ladoB);
	
	printf("Digite o lado C: ");
	scanf("%f", &ladoC);
	
	diagonal = hipotenusa(hipotenusa(ladoA,ladoB),ladoC);
	
	printf("Diagonal: %f", diagonal);
}


