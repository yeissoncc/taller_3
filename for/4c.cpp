# include <stdio.h>

int main(){
	int i,suma,numero=0;
	printf("ingrese numero la cantidad de numeros a sumar\n");
	scanf("%d",&numero);
	for(i=1;i<=numero;i++) {
		printf(" %d ",i);
		
	suma=suma+i;
	}
	printf("= %d ",suma-1);



	
	return 0;	
}

