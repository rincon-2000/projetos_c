#include<stdio.h>
int ehPrimo(int numero){
	for(int fernando = 2; fernando <= numero/2; fernando++){
		if(numero%fernando==0){
			return 0;
		}
	}
	 return 1;
}

int main(){
	int numero;
	
	
	printf("\nDigite um numero:");
	scanf("%d", &numero);
}