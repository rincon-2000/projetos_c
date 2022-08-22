#include<stdio.h>
int main()
{
	int vetor[10], maiorNumero =0, menorNumero=999999, i;
	float media, soma;
	for(i=0; i<10; i++){
		
		printf("Digite um numero:");
		scanf("%i", &vetor[i]);
		
		if(maiorNumero < vetor[i]){
			maiorNumero = vetor[i];
			
		}
		if(menorNumero > vetor[i]){
			menorNumero = vetor[i];
		}
		
		soma= soma + vetor[i];
		printf("A soma eh: %.2f\n", soma);
	}
	
	media=soma/10;
	
	printf("\nA media eh %.2f", media);
	
	printf("\nO maior numero eh: %i", maiorNumero);
	
	printf("\nO menor numero eh: %i", menorNumero);
}