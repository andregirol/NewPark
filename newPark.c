/*
Algoritmo para calcular o valor a ser pago por período de permanencia de um automóvel
em um estacionamento. O operador entra com o s seguintes dados:

HoraEnt e MinEnt de entrada
HoraSaida e MinSaida de saída

A hora cheia cobrada pelo estaconamento é de R$ 4,00 e passando 1 minuto,
é cobrada a segunda hora cheia.

### Tarifas ###

Segue abaixo tarifas cobradas por hora:
1 hora = R$ 4,00
horas adicionais = adicional de R$ 2,00


OBS: Utilizar somente números Inteiros

*/

//#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
// Definição das variáveis

	//int ContVeic;

	// Variáveis de hora
    //int HoraEnt, MinEnt, HoraSaida, MinSaida, HoraTotal, MinTotal;


    //V5=1, REST1, REST2, REST3, REST4, VALOR_PAGAR;

    //float V1, V2, V3, V4;
	//double  placa;

    char menu[2];
	int opcao;

	do {
		//Menu Inicial
		printf ("\n\n===== New Park =====\n\n");
    	printf ("\n Menu inicial \n 1 - Entrada de veículos \n 2 - Saida de veículos \n\n 0 - Sair do programa");
 		printf ("\nDigite a opção requerida: ");
		scanf ("%2s", &menu[0]);
		opcao = atoi(&menu[0]);

		switch(opcao){

			case 0:


				printf ("Finalizando...\n");
				printf ("Pressione qualquer tecla para continuar...");
				getchar();
				getchar();
				break;

			case 1:
				printf("Processa entradas...");
				break;

			case 2:
				printf("Processa saidas....");
				break;


			default:
				system("clear");
				printf("\n===============");
				printf("\n\nOpcao inválida!");
				printf("\n\n===============\n");
				break;
		}

	 } while (opcao !=0);


	return 0;
}
