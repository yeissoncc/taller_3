# include <stdio.h>

int main(){
	int mayor=0,i,suma,numero;
	for(i=1;i<=10;i++) {
		printf("ingrese numero : %d \n",i);
		scanf("%d",&numero);
		if(numero>mayor) {
			mayor=numero;
		}
	
		suma+=numero;
	}
printf("mayor %d \n",suma);


	
	return 0;	
}

