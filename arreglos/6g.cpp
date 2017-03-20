#include <stdio.h>



int main () {
    char cadena1[] = {'Y', 'E','I', 'S', 'S', 'O', 'N',' '};
    char cadena2[] = {'C', 'A', 'S', 'T', 'R', 'O'};
    char resultado[50];
    int l1 = 8, l2 = 8, i;
    for(i = 0; i < l1; i++){
        resultado[i] = cadena1[i];
    }
    for(i = 0; i < l2; i++){
        resultado[l1 + i] = cadena2[i];
    }
    for(i = 0; i < l1 + l2; i++){
        printf("\n %c \n ", resultado[i]);
    }
   return 0;
}

