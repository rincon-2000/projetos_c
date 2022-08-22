#include<stdio.h>



int main(){
	//exercicio 2 a
	
	for(int numero = 1; numero <= 100000; numero++){
		if(ehImpar(numero)){
			printf("numero %i e impar\n", numero);
		}
	}

	return 0;
}

int ehImpar(int numero){//parametros
return (numero % 2 != 0)? 1:0;
}
