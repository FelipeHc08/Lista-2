#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char nomeA[50], nomeB[50], nomeC[50];
	float alturaA, alturaB, alturaC;
	printf("Informe seu nome: ");
	scanf("%s", &nomeA);
	printf("\n%s, informe sua altura: ", nomeA);
	scanf("%f", &alturaA);
	printf("\nInforme seu nome: ");
	scanf("%s", &nomeB);
	printf("\n%s, informe sua altura: ", nomeB);
	scanf("%f", &alturaB);
	printf("\nInforme seu nome: ");
	scanf("%s", &nomeC);
	printf("\n%s, informe sua altura: ", nomeC);
	scanf("%f", &alturaC);
	if (alturaA>alturaB && alturaA>alturaC)
	printf("\n%s (%.2f m) é a pessoa mais alta!",nomeA, alturaA);
    else if (alturaB>alturaA && alturaB>alturaC)
	printf("\n%s (%.2f m) é a pessoa mais alta!",nomeB, alturaB);
	else if (alturaC>alturaB && alturaC>alturaA)
	printf("\n%s (%.2f m) é a pessoa mais alta!",nomeC, alturaC);
	else if (alturaA==alturaB && alturaB==alturaC)
	printf("\nTodos possuem a mesma altura!");   
	
	return 0;
}
