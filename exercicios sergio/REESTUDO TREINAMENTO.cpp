#include<stdio.h>
main()
{
	int hora;
	char nome [20];
	
	printf("Digite seu nome:", nome);
	scanf("%s", &nome);
	
	printf("\nDigite a hora:", hora);
	scanf("%d", &hora);
	
	if (hora>=4 && hora<=12){
		
	printf("\nBom dia, %s", nome);
		
	}if (hora>=13 && hora<=18){
		
	printf("\nBoa tarde %s ", nome);
			
	}if(hora >=19 && hora<=24 || hora>= 0 && hora<=5){
	
	printf("\nBoa noite, %s ", nome);
	
	}else if(hora<0||hora>24){

	printf("\nERRO");
	}
}
