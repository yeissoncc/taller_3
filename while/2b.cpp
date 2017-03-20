/*
nombre del programa : menu de progrmas numericos
autor :yeisson estiven castro
fecha: 26/ 02 /2017

*/
//librerias
#include <stdio.h>
#include <cmath>

int main(){
	
	int numero,suma;
	
	printf("ingrese el primer valor \n");
	while(numero<100) {
		numero++;
		
		printf("%d,",numero);
		
	suma=suma+numero;
	}
		
		printf("\n la suma es de %d",suma);
	
	return 0;
}
