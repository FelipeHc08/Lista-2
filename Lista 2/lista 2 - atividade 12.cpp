#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int ddd;
	scanf ("%d", &ddd);
	
if (ddd == 61) 
    printf("Este n�mero DDD pertence � Brasilia."); 
        else if (ddd==71) 
		    printf("Este n�mero DDD pertencente � Salvador");
            else if (ddd==11) 
                printf("Este n�mero DDD � pertencente � S�o Paulo"); 
                else if (ddd==21) 
                    printf("Este n�mero DDD pertence ao Rio de Janeiro"); 
                    else if (ddd==32) 
                        printf("Este n�mero DDD � pertencente � Juiz de fora"); 
                        else if (ddd==19) 
                            printf("Este n�mero DDD � pertencente � Campinas");
                            else if (ddd==27) 
                                printf("Este n�mero DDD � pertencente � Vitoria");
                                else if (ddd==31)
                                    printf("Este n�mero DDD � pertencente � Belo Horizonte");
                                    else printf ("Numero ddd nao foi localizado!\n");
	return 0;
}
