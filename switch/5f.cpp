//librerias
#include <stdio.h>
#include <cmath>

int main(){
	int menu;
	
	printf("1. numeros par e impar \n");
	printf("2. cubo de un numero\n");
	printf("3.Salir \n");

	
	printf("ingrese un numero \n");
	scanf("%d",&menu);
	
	switch(menu){
		case 1: printf("ingrese numero \n");	
				int numero;
				scanf("%d",&numero);
					
					if(numero%2==0) {
						printf("el numero %d es par \n",numero);
					
					}else{
						
						printf("el numero %d es impar  \n",numero);
					}
			break;
		case 2: printf("ingrese numero \n");
					int cubo;
					scanf("%d",&numero);
					
					cubo=numero*numero*numero*numero;
					printf("el resultado es: %d  \n",cubo);
						
			break;
		case 3: printf("hasta pronto \n");
			break;
	}
	return 0;
}
