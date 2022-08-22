#include<stdio.h>

int ehImpar(int numero){
	
	if(0 < numero && numero < 100000){
		return (numero % 2 != 0)? 1:0;
	}
	
	return 0;
}

int ehPrimo(int numero){
	
	for(int divisor = 2; divisor <= (numero/2);dividor++){
		if(numero % divisor == 0){
			return 0;
		}
	}
	
	return 1;
}



int main(){
	int numero = 101;
	printf("o numero %i e %i", numero, ehImpar(numero));

	return 0;
}