//librerias
#include <stdio.h>
#include <cmath>

int main(){
	int menu;
	
	printf("1. \n");
	printf("2. \n");
	printf("3. \n");
	printf("4. \n");
	printf("5. \n");
	printf("6. \n");
	printf("7. \n");
	printf("8. \n");
	printf("9. \n");
	printf("10. \n");
	printf("11. \n");
	printf("12. \n");
	
	printf("ingrese un numero \n");
	scanf("%d",&menu);
	
	switch(menu){
		case 1: printf("Enero\n");	
			break;
		case 2: printf("Febrero \n");	
			break;
		case 3: printf("Marzo \n");
			break;
		case 4: printf("Abril\n");
			break;
		case 5: printf("Mayo\n");
			break;
		case 6: printf("Junio\n");	
			break;
		case 7: printf("Julio \n");	
			break;
		case 8: printf("Agosto  \n");
			break;
		case 9: printf("Setiembre\n");
			break;
		case 10: printf("Obtubre \n");	
			break;
		case 11: printf("Noviembre \n");
			break;
		case 12: printf("Disiembre\n");
			break;
	}
	return 0;
}
