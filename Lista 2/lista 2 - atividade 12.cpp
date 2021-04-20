#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int ddd;
	scanf ("%d", &ddd);
	
if (ddd == 61) 
    printf("Este número DDD pertence à Brasilia."); 
        else if (ddd==71) 
		    printf("Este número DDD pertencente à Salvador");
            else if (ddd==11) 
                printf("Este número DDD é pertencente à São Paulo"); 
                else if (ddd==21) 
                    printf("Este número DDD pertence ao Rio de Janeiro"); 
                    else if (ddd==32) 
                        printf("Este número DDD é pertencente á Juiz de fora"); 
                        else if (ddd==19) 
                            printf("Este número DDD é pertencente á Campinas");
                            else if (ddd==27) 
                                printf("Este número DDD é pertencente á Vitoria");
                                else if (ddd==31)
                                    printf("Este número DDD é pertencente á Belo Horizonte");
                                    else printf ("Numero ddd nao foi localizado!\n");
	return 0;
}
