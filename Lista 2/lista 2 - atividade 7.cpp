#include <stdio.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL,"Portuguese");
	int A, B, diferenca;
	printf("Insira o primeiro n�mero: ");
	scanf("%d", &A);
	printf("Insira o segundo n�mero: ");
	scanf("%d",&B);
	
	if (A>=B){
	
	diferenca = A - B;
	printf("A diferen�a entre o maior valor (%d) e o menor valor (%d) � igual a %d .", A , B, diferenca);	
}
	else {
	
	diferenca = B - A;
		printf("A diferen�a entre o maior valor (%d) e o menor valor (%d) � igual a %d.", B , A, diferenca);	
}
	
	return 0;
}
