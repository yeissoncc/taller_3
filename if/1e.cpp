/*
nombre del programa : menu de progrmas numericos
autor :yeisson estiven castro
fecha: 26/ 02 /2017

*/
//librerias
#include <stdio.h>
#include <cmath>

int main(){
	
	int numero1, numero2,numero3,numero4;
	
	printf("ingrese el primer valor \n");
	scanf("%d",&numero1);
	printf("ingrese el segundo valor \n");
	scanf("%d",&numero2);
	printf("ingrese el tercer valor valor \n");
	scanf("%d",&numero3);
	
	printf("ingrese el cuarto numero con el que desea comparar \n");
	scanf("%d",&numero4);
	
	if(numero1==numero4) {
		printf("el %d numero son iguales",numero1);
}else if(numero2==numero4) {
	printf("el %d numero son iguales \n",numero2);
	
}else if(numero3==numero4) {
		printf("el %d numero son iguales \n",numero3);
	
}else{
	printf("el numero no es igual a nigun numero \n");
	
}
	
	return 0;
}
