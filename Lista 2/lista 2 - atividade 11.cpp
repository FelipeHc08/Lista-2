#include<stdio.h>
#include<locale.h>
    
    int main(){
       	setlocale (LC_ALL, "Portuguese");
       	int a,b,c;
       	printf("Informe o valor de A: ");
       	scanf ("%d", &a);
        printf("Informe o valor de B: ");
      	scanf ("%d", &b);
	    printf("Informe o valor de C: ");
       	scanf ("%d", &c);        	
            
        	
		
			if ( b - c < a && a < b + c && a - c  < b && b < a + c && a - b  < c && c < a + b && a>0 && b>0 && c>0){
			printf("É possível formar um triângulo com estes valores (%d, %d, %d), ",a,b,c);
			if ((a==b) && (a==c) && (b==c))
			printf("do tipo equilátero.");	
			else if ((a!=b) && (a!=c)&& (b!=c))
			printf("do tipo escaleno.");
			else if ((a==b && a!=c )||(a==c && a!=b)||(b==c && b!=a))
			printf ("do tipo isóceles.");	
			}else{
        	printf("Não é possível formar um triângulo com estes valores (%d, %d, %d).", a, b, c);
        	if (a<0 || b<0 || c<0)
        	printf (" Pois apresenta um ou mais valores negativos.");
        	if (a==0 || b==0 || c==0)
        	printf (" Pois apresenta um ou mais valores zerados.");
        }
			
        	return 0;
		}
