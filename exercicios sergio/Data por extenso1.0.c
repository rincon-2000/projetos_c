#include<stdio.h>
int main()
{
	int mes = 0;
	int dia;
	int diaMaximo;
	char *nomeDoMes="g";
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
	
	if(mes==1){
		nomeDoMes = "Janeiro";
	}
	else if(mes==2){
		nomeDoMes = "Fevereiro";
	}	
	else if(mes==3){
		nomeDoMes="Marco";
	}	
	else if(mes==4){
		nomeDoMes="Abril";
	}	
	else if(mes==5){
		nomeDoMes="Maio";
	}	
	else if(mes==6){
		nomeDoMes="Junho";
	}	
	else if(mes==7){
		nomeDoMes="Julho";
	}	
	else if(mes==8){
		nomeDoMes="Agosto";
	}	
	else if(mes==9){
		nomeDoMes="Setembro";
	}	
	else if(mes==10){
		nomeDoMes="Outubro";
	}	
	else if(mes==11){
		nomeDoMes="Novembro";
	}	
	else if(mes==12){
		nomeDoMes="Dezembro";
	}
	printf("%i de %s de 2022", dia,nomeDoMes);
		
return 0;
}