#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	int numero;
	printf("Insira um número: ");
	scanf("%d",&numero);
	if (numero %2 == 0) 
		printf("O número %d é PAR.\n", numero);
		else 
		printf("O número %d é ÍMPAR.\n", numero);

	return 0;
}
