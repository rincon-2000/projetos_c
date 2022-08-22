#include<stdio.h>
int main()
{
	int numero =1,soma = 0;

	while(numero != 0){
		printf("\nDigite um numero:");
		scanf("%i", &numero);
		
		if(numero % 2 == 1){
			soma = soma + numero;
		}
	
	}
	
	printf("Soma: %i", soma);
	
	return 0;
}