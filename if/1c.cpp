/*
nombre del programa : menu de progrmas numericos
autor :yeisson estiven castro
fecha: 26/ 02 /2017

*/
//librerias
#include <stdio.h>
#include <cmath>

int main(){
	
	int numero;
	
	printf("ingrese el primer valor \n");
	scanf("%d",&numero);
	
	if(numero%2==0) {
	printf("el numero %d es par \n",numero);
		
}else{
		
	printf("el numero %d es impar  \n",numero);
	
}

	
	return 0;
}
