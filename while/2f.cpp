#include <stdio.h> 
int main() 
{ 
int numero, f=2, ant=1, resultado; /// Te conviene trabajar con long Int para el resultado 
	printf("\nIntroduzca un numero\n"); 
	scanf("%d", &numero); 
		while(f<=numero) { 
		
		resultado= f+ant; 
		ant=f; 
		f=resultado; 
	} 

		if(numero==0) resultado=0; 
		if(numero==1 || numero==2) resultado=1; 

		printf("Fibonacci(%d) = %d ", numero, resultado); 
return 0; 

}
