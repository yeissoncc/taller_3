/*
nombre del programa : menu de progrmas numericos
autor :yeisson estiven castro
fecha: 26/ 02 /2017

*/
//librerias
#include <stdio.h>
#include <cmath>

#include<stdio.h> 
#include<conio.h>
 
int main() {	 
	int fnumero=0,factorial,i; 
	printf("Ingresa numero para calcular el factorial "); 
	scanf("%d",&fnumero); 
		i=fnumero-1; 
		factorial=fnumero; 
			while (i>=1) { 
				factorial=factorial*i; 
				i--; 
		} 

		printf("El factorial de %d es: %d ", fnumero,factorial); 
		getch(); 
} 
