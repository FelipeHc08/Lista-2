#include<stdio.h>
#include<locale.h>
    
    int main(){
       	setlocale (LC_ALL, "Portuguese");
       	float a,b,c;
       	printf("Informe o valor de A: ");
       	scanf ("%f", &a);
        printf("Informe o valor de B: ");
      	scanf ("%f", &b);
	    printf("Informe o valor de C: ");
       	scanf ("%f", &c); 
	if (a>b && a>c)
	printf("O maior valor apresentado é %.1f", a);
	else if (b>a && b>c)
	printf("O maior valor apresentado é %.1f",b);
	else if(c>b && c>a)
	printf("O maior valor apresentado é %.1f ",c);
	else if (a==b && b==c && c==a)
	printf("Os valores apresentados são iguais.");
	
	return 0;	          	
}
