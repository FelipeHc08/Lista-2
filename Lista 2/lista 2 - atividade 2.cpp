#include <stdio.h>
#include <locale.h>
#include <math.h>

    int main(){
    	setlocale(LC_ALL, "Portuguese");
    	int numero;
    	printf("Informe o n�mero que deseja descobrir o m�dulo: ");
    	scanf("%d", &numero);
    	
        printf("O n�mero %d possu� m�dulo igual a %d.\n",numero, abs(numero));
    	
    	
    	    	   	
    	return 0;
	}
