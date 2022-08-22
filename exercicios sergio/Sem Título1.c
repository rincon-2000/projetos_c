#include <stdio.h>
#define ALMA_GASOLINA 7.12
#define ALMA_ALCOOL   4.69

float ValorPagar ( float litros_gasolina, float litros_alcool)
{   float res;
     res = ALMA_GASOLINA*litros_gasolina  + litros_alcool*ALMA_ALCOOL;
	return (ALMA_GASOLINA*litros_gasolina  + litros_alcool*ALMA_ALCOOL);
}

int main () {
	
float alcool;
float gasolina;

for (;;) {
     printf ("\n Digite a quantidade de litros de alcool abastecido:");
	 scanf ("%f", &alcool);
	
     printf ("\n Digite a quantidade de litros gasolina de abastecido:");
	 scanf ("%f", &gasolina);	 	
	 printf ("\n Valor a pagar = %.2f", ValorPagar(alcool, gasolina));
	//  colocar condicao para sair do for quando alcool ou  gasolina forem menor ou igual a 0 
	 if(gasolina>=0 || alcool>=0){
	 	break;
	 }
   }


} // main