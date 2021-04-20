#include <stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	float a,b,c;
	printf("Informe o valor de três números: ");
	scanf("%f%f%f",&a,&b,&c);
	
	if( a<b && a<c){
		printf("O menor valor apresentado é %.1f",a);
	}
		else if (b<c && b<a){
		printf("O menor valor apresentado é %.1f",b);
	}
	    else if (c<a && c<b)
	    printf("O menor valor apresentado é %.1f",c);
    
    return 0;
}
