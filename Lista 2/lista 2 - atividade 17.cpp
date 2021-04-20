#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int anoNascimento, anoAtual, dias;
	printf("Informe o ano do seu nascimento: ");
	scanf("%i", &anoNascimento);
	
	if (anoNascimento<0){
	printf("Ano inválido.");
	return 0; 
}
	else
	printf("Informe o ano atual: ");
	scanf("%i", &anoAtual);
	
	if (anoAtual<0){
	printf("Ano inválido.");
	return 0; 
}
	dias = (anoAtual - anoNascimento) * 365;
	printf("Você já viveu aproximadamente %i dias!", dias);  
	return 0;
}
