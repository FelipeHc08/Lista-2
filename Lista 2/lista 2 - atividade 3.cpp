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
        	if ( b - c < a && a < b + c && a - c  < b && b < a + c && a - b  < c && c < a + b){
        	    printf ("É possível formar um triângulo com estes valores (%d, %d, %d).\n",a,b,c);
          
			}else {
        	printf("Não é possível formar um triângulo com estes valores (%d, %d, %d),", a, b, c);
        }
			
			if (a==0 || b==0 || c==0){
        	printf (" pois apresenta um ou mais valores zerados.");
        }
        	else if (a<0 || b<0 || c<0){
        		printf("Não é possível formar um triângulo com valores negativos.");
			}
        	       	
	
        	return 0;
		}
