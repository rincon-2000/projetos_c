#include<stdio.h>
int main()
{
	int mes = 0;
	int dia;
	int diaMaximo;
	char *nomeDoMes[12] = {"Janeiro","Fevereiro","Março","Abril","Maio","Junho","Julho","Agosto", "Setembro","Outubro","Novembro","Dezembro"};
	do{
		printf("Digite um mes:");
		scanf("%i", &mes);
	
	}while((mes<1) || (mes>12));
	
	if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
		diaMaximo=31;
	}else if(mes==4||mes==6||mes==9||mes==11){
		diaMaximo=30;	
	}else if(mes==2){
		diaMaximo=28;
	}
	do{
		printf("Digite um dia:");
		scanf("%i", &dia);
	
	}while((dia<1) || (dia>diaMaximo));
	

	printf("%i de %s de 2022", dia,nomeDoMes[mes-1]);
		
return 0;
}
