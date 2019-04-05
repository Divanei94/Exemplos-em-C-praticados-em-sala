//Função recursiva, exemplo com fatorial
#include<stdio.h>

long fatorial (long numero)
{
	if (numero <=1){
		return 1;
	}else{
		return numero * fatorial(numero-1);
	}
}

void main ()
{
	int i;
	
	for(i=1;i<=10;i++)
	printf("%2d! = %1d \n", i, fatorial(i));
}
