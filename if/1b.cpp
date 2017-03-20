/*
nombre del programa : menu de progrmas numericos
autor :yeisson estiven castro
fecha: 26/ 02 /2017

*/
//librerias
#include <stdio.h>
#include <cmath>

int main(){
	
	int numero1, numero2,numero3;
	
	printf("ingrese el primer valor \n");
	scanf("%d",&numero1);
	printf("ingrese el segundo valor \n");
	scanf("%d",&numero2);
	printf("ingrese el tercer valor valor \n");
	scanf("%d",&numero3);
	
	if(numero1>numero2) {
		printf("el primer numero es el mayor");
}else if(numero2>numero3){
	printf("el segundo numero es el mayor");
	
}else if(numero3>numero1){
	printf("el tercer numero es el mayor");
}
	
	return 0;
}
