//Escrever um programa que leia as medidas dos tr�s lados a,b e c de um paralelep�pedo, calcule e escreva o valor de sua diagonal
//Fun��o com passagem de dois par�metros com retorno de valor
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


