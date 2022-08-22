#include<stdio.h>
main()
{
	float precoGasolina;
	float precoAlcool;
	float compensa;

	printf("\nDigite um preco para o litro do alcool:");
	scanf("%f", &precoAlcool);
	
	printf("\nDigite um preco para o litro da gasolina:");
	scanf("%f", &precoGasolina);
	
	compensa=precoAlcool/precoGasolina;
	
	if(compensa>0.7){
	printf("\nCompensa por gasolina!");
		}else if(compensa<0.7){
		printf("\nCompensa por alcool!");
	}
}