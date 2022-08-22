#include<stdio.h>


int ehPrimo(int numero){
	
	for(int divisor = 2; divisor <= (numero/2);divisor++){
		if(numero % divisor == 0){
			return 0;
		}
	}
	
	return 1;
}


int main(){
	//exercicio 2 a
	int numero=1;
	while(numero!=0){
		printf("\nDigite um numero:");
		scanf("%d", &numero);
		
		if(ehPrimo(numero)){
			printf("Eh primo!\n");
		}else{
			printf("Nao eh primo!\n");
		}
		
	}
	return 0;
}