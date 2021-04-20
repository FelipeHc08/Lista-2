#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<ctype.h> 
    int main(){
    	setlocale (LC_ALL, "Portuguese");
    	char nome[50], sexo;
    	float peso, altura;
		printf("Olá, seja bem-vindo(a)!\nPor gentileza, preencha as informações abaixo:\n");    
		printf("Informe seu nome: ");
    	scanf("%s", &nome);
	    fflush(stdin);
		
		printf("Informe seu sexo (M/F): ");
		scanf("%d", &sexo);
		sexo= getchar();
		fflush(stdin);
        sexo = toupper(sexo);
        printf ("Informe sua altura: ");
        scanf ("%f", &altura);
              

    while ((sexo != 'M') && (sexo != 'F')){
        sexo = getchar(); 
        fflush(stdin);
        sexo = toupper(sexo);    
    }
           
	if (sexo == 'M'){
        printf ("Ilmo Sr. %s,",nome);
		peso=((72.5 * altura)-58.0);
		printf(" o peso recomendado para sua altura (%.2f) seria %.2f kg.",altura, peso);
    }
    else if (sexo == 'F'){
    	printf ("Ilma Sra. %s,",nome);
        peso=((62.1 * altura)-44.7);
		printf(" o peso recomendado para sua altura %.2f seria %.2f kg.", altura, peso);
}
 return 0;
}
