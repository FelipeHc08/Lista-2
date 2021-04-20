#include <stdio.h>
#include <locale.h>
#include <math.h>

    int main(){
    	setlocale(LC_ALL, "Portuguese");
    	int numero;
    	printf("Informe o número que deseja descobrir o módulo: ");
    	scanf("%d", &numero);
    	
        printf("O número %d possuí módulo igual a %d.\n",numero, abs(numero));
    	
    	
    	    	   	
    	return 0;
	}
