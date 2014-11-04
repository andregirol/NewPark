/*
Algoritmo para calcular o valor a ser pago por período de permanencia de um automóvel 
em um estacionamento. O operador entra com o s seguintes dados:

Hora (HRE) e minutos (MNE) de entrada
Hora (HRS) e minutos (MNS) de saída

A hora cheia cobrada pelo estaconamento é de R$ 4,00 e passando 1 minuto, 
é cobrada a segunda hora cheia.

### Tarifas ###

Segue abaixo tarifas cobradas por hora:
1 hora=R$ 4,00
2 horas= R$4,00+R$ 2,00
Acima de 2 horas= adicional de R$ 1,00

OBS: Utilizar somente números Inteiros

*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int main(){
// Definição das variáveis
   
	int  menu, ContVeic;
	
	// Variáveis de hora 
    int HoraEnt, MinEnt, HoraSaida, MinSaida, HoraTotal, MinTotal;
    
    
    //V5=1, REST1, REST2, REST3, REST4, VALOR_PAGAR;
	
    //float V1, V2, V3, V4;
	//double  placa;
    
    char sair = 'A';
	while(sair != 'X'){
		//Menu Inicial
		printf ("===== New Park =====\n\n");
    	printf ("\n Menu inicial \n 1 - Entrada de veículos \n 2 - Saida de veículos \n X - Sair do Programa \n");
 		printf ("\nDigite a opcao requerida: ");
		scanf ("%d", &menu);
	
		if ((menu < 1) || (menu > 3));
		   menu = atoi(menu);
		   printf("Opcao invalida\n");
           system("cls");
		   continue;
		
        return 0;
	}
}
