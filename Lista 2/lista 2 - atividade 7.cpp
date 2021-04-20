#include <stdio.h>
#include <locale.h>
int main (){
	setlocale (LC_ALL,"Portuguese");
	int A, B, diferenca;
	printf("Insira o primeiro número: ");
	scanf("%d", &A);
	printf("Insira o segundo número: ");
	scanf("%d",&B);
	
	if (A>=B){
	
	diferenca = A - B;
	printf("A diferença entre o maior valor (%d) e o menor valor (%d) é igual a %d .", A , B, diferenca);	
}
	else {
	
	diferenca = B - A;
		printf("A diferença entre o maior valor (%d) e o menor valor (%d) é igual a %d.", B , A, diferenca);	
}
	
	return 0;
}
