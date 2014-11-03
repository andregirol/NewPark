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


int main()
{
// Definição das variáveis
   
	int  menu, ContVeic, 
	
	// Variáveis de hora 
    int HoraEnt, MinEnt, HoraSaida, MinSaida, HoraTotal, MinTotal;
    
    
    V5=1, REST1, REST2, REST3, REST4, VALOR_PAGAR;
	
    float V1, V2, V3, V4;
	double  placa;
    
    char sair = 'A';
	while(sair != 'X')
	{
		//Menu Inicial
		printf ("===== New Park =====\n\n");
    	printf ("\n Menu inicial \n 1 - Entrada de veículos \n 2 - Saida de veículos \n X - Sair do Programa \n");
 		printf ("\nDigite a opcao requerida: ");
		scanf ("%d", &menu);
	
		// Verificação do MENU.	
		if ((MENU>3) || (MENU<=0))
		{
			printf("Favor digitar opcao de MENU correta! %d", MENU);
			getch();
		}
		if ((MENU>0) && (MENU<=3))
		{
			break;
		}
	}
	
	//Verificação se o número é inteiro
	while(2)
	{
		printf("Digite a hora de entrada: ");
		scanf("%f",&V1);
		printf("Digite os minutos de entrada: ");
		scanf("%f",&V2);
		printf("Digite a hora de saída: ");
		scanf("%f",&V3);
		printf("Digite os minutos de saída: ");
		scanf("%f",&V4);		
		
		REST1 = fmodf(V1,V5);
		REST2 = fmodf(V2,V5);
		REST3 = fmodf(V3,V5);
		REST4 = fmodf(V4,V5);
		
		//SE O RETANTE FOR = 0, IRÁ TRANSFORMAR EM INTEIRO E GUARDAR NAS VARIÁVEIS HRE, MNE, HRS, MNS
		if ((REST1 == 0) && (REST2 == 0) && (REST3 ==0) && (REST4 == 0))
		{
			HRE=(int)V1;
			MNE=(int)V2;
			HRS=(int)V3;
			MNS=(int)V4;
			
			if (((HRE>=0) && (HRE<=23)) && ((HRS>=0) && (HRS<=23)))
			{
				if (((MNE>=0) && (MNE<=59)) && ((MNS>=0) && (MNS<=59)))
				{
						
					break;
			    }
			}
		}
	
		if ((REST1!=0) || (REST2!=0) || (REST3!=0) || (REST4!=0))
		{
			printf("\nFavor digitar numeros inteiros!");
                      
                       getch();
         }
		//limpa tela		
		system("cls");
	}//Fim da verificação com "while"

	if(HRS < HRE)
		HRS=HRS+24;
	if(MNS < MNE)
	{
		MNS=MNS+60;
		//HRS=HRS+1;
	}
	H=HRS-HRE;
	M=MNS-MNE;
	printf("O tempo foi de %d horas %d minutos", H, M);
	VALOR_PAGAR = H*60 + M; // Transformando horas em minutos.
	

	if((VALOR_PAGAR >=0) && (VALOR_PAGAR <=60))
	{
		printf("\nTotal de R$4,00");
	}
   	
	else if((VALOR_PAGAR >=60) && (VALOR_PAGAR <=120))
	{
		printf("\nTotal de R$6,00");
	} 
	else if((VALOR_PAGAR >=120) && (M == 0))
	{
		VALOR_PAGAR=4+H;
		printf("\nTotal de R$%d,00",VALOR_PAGAR);
	}
	else if((VALOR_PAGAR >120) && (M > 0))
	{
		VALOR_PAGAR=4+H;
		printf("\nTotal de R$%d,00",VALOR_PAGAR);
	}
	}
