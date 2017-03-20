# include <stdio.h>

int main(){
	int i,suma,numero=0,multi;
	printf("ingrese numero la cantidad de numeros a sumar\n");
	scanf("%d",&numero);
	printf("ingrese numero exponente\n");
	scanf("%d",&multi);
	for(i=1;i<=numero;i++) {
		
		printf(" %d^%d",multi,i);
		
	suma=multi*suma+i;
	}
	printf("= %d ",suma-1);



	
	return 0;	
}

