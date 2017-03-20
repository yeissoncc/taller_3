# include <stdio.h>

int main(){
	int numero, contador=1, op;
	printf("ingrese numero del 1 al 10 para hacer tablas de multiplicar \n");
	scanf("%d",&numero);
	do {
	op=contador*numero;
	printf("%d X %d = %d   \n",numero, contador,op);	
	contador++;
	
	
} while(contador <=10);

		
	
	return 0;	
}

