#include<stdio.h>
#include<locale.h>
    
    int main(){
       	setlocale (LC_ALL, "Portuguese");
       	float hora, preco;
    printf("Por gentileza, informe a quantidade de tempo em horas que a internet foi utilizada: ");
    scanf("%f", &hora);
    preco==30;  
	if (hora>20){
		preco = 30 + hora * 3;
    printf("O valor a ser pago por %.1f horas de uso:\nValor b�sico (R$30,00) com acr�cimo por horas extras (%.1f).\nTotal: R$ %.2f.",hora,hora-20,preco);
}
    else if (hora<0)
    printf("Valor inv�lido!\n");
    else {
    printf("O valor a ser pago por %.1f hora(s) de uso � igual ao valor b�sico sem acr�cimos.\nTotal: R$ 30,00",hora);
}
return 0;
}

