#include<stdio.h>
int main()
{
	int horas;
	char nome [20];
		
	printf("Digite seu nome:", nome);
	scanf("%s", &nome);
	printf("\nDigite as horas: ", horas);
	scanf("%i", &horas);
	
	if(horas>=4 && horas<=12){
		printf("Bom dia %s", nome);	
	
	}else if(horas>=13 && horas<=18){
		printf("\nBoa tarde: %s", nome);		
	
	}else if(horas>=19 && horas<=24 || horas>=0 && horas<=5){
		printf("\nBoa noite: %s", nome);			
	}else{
		printf("\nErro");
	}
	
	return 0;
		
}