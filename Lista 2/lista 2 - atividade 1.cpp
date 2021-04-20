#include <stdio.h>
#include <locale.h>
    int main(){
    	setlocale(LC_ALL, "Portuguese");
    	
		char placa [9];
    	float velocidade;
    	
        printf ("Informe a placa do veículo (XXX-0000): ")
    	scanf ("%9s", &placa);    
	    
		if ( placa[8] != '\0') 
		{
		printf("Placa não encontrada.");
	    
		}else{	
		 printf ("Informe a velocidade, em Km/h: ");
    	scanf ("%f", &velocidade);
    		
		        if (velocidade > 80) {
		            printf ("Atenção! O veículo de placa %9s encontra-se %.1f Km/h acima do limite de velocidade. Sujeito à multa.\n", placa, velocidade-80); 
			        }else if(velocidade<=80) 
					        printf ("O veículo de placa %9s encontra-se dentro do limite de velocidade, %.1f Km/h. Boa viagem!", placa, velocidade); 
    	
    }
    	    	   	
    	return 0;
	}
