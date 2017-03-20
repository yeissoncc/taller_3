/*
nombre del programa : menu de progrmas numericos
autor :yeisson estiven castro
fecha: 26/ 02 /2017

*/
//librerias
#include <stdio.h>
#include <cmath>

int main(){
	
	int numero1, numero2;
	
	printf("ingrese el primer valor \n");
	scanf("%d",&numero1);
	printf("ingrese el segundo valor \n");
	scanf("%d",&numero2);
	if(numero1>numero2) {
		printf("el numero %d es maryor",numero1);
}else	printf("el numero %d es maryor",numero2);
	
	return 0;
}
