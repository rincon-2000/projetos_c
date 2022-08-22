#include <stdio.h>
#define ALMA_ALCOOL   4.95
#define ALMA_GASOLINA 7.12
float ValorPagar ( float litros_alcool, float litros_gasolina)
{   float res;
	
	float alcool;
	float gasolina; 
     res = litros_alcool*ALMA_ALCOOL + ALMA_GASOLINA*litros_gasolina; 
	return ( litros_alcool*ALMA_ALCOOL + ALMA_GASOLINA*litros_gasolina);
	
}

int main ()
{
	float compensa;
	float alcool;
	float gasolina;

     printf ("\n Digite a quantidade de litros de alcool abastecido:");
	 scanf ("%f", &alcool);
	
     printf ("\n Digite a quantidade de litros gasolina de abastecido:");
	 scanf ("%f", &gasolina);	 
	 		
	 printf ("\n Valor a pagar = %.2f", ValorPagar(alcool, gasolina));
	//  colocar condicao para sair do for quando alcool ou  gasolina forem menor ou igual a 0 
	compensa=ALMA_ALCOOL/ALMA_GASOLINA;
	if(compensa>0.7){
	 	printf("\nCompensa por gasolina!\n");
	 }
	 	else if(compensa<0.7){
	 		printf("\nCompensa colocar alcool!\n");
	 		
	}
}
