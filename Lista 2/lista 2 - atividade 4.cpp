#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<ctype.h> 
    int main(){
    	setlocale (LC_ALL, "Portuguese");
    	char nome[50], sexo,F,M;
    
		printf("Informe seu nome: ");
    	scanf("%s", &nome);
	    
		printf("Informe seu sexo (M/F): ");
		scanf("%d", &sexo);
		sexo= getchar();
		fflush(stdin);
        sexo = toupper(sexo);

    while ((sexo != 'M') && (sexo != 'F')){
        sexo = getchar(); 
        fflush(stdin);
        sexo = toupper(sexo);   
        
    }
    if (sexo == 'M'){

        printf("Ilmo Sr. %s\n", nome);
    
    }
    else if (sexo == 'F'){

            printf("Ilma Sra. %s\n", nome);
}
	
	return 0;

}
