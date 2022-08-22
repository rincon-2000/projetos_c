#include<stdio.h>

//<tipod de retorno> <noime da funcao>(<paremetros>)
int ehPrimo(int numero){
	
	for(int divisor = 2; divisor <= (numero/2); divisor++){
		if(numero % divisor == 0){
			return 0; //retorna false
		}
	}
	
	return 1;//retorna true
}

int main(){
	int numero =1;
	
	//3-Repetir a opera��o at� que seja digitado a op��o com valor 0 para sair; caso contr�rio solicita um novo valor	
	while(numero != 0){
	
		//1 - ler um numero	
		printf("\nDigite um numero: ");
		scanf("%d", &numero);
		
		//2 - verificar se � primo
		if(ehPrimo(numero)){
			printf("O numero digitado eh primo!\n");
		}else{
			printf("O numero digitado nao eh primo!\n");
		}
		
	}
	
	return 0;
}
