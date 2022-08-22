#include<stdio.h>

float Media3e5 (int vetor[10]) { // passado como parametro um vetor com 10 posicoes ja preenchido
    int x; // usado para percorrer o vetor
    int qtd = 0; // usado para saber quantos numeros multiplos de 3 e 5
    int soma = 0; // usado para somar os numeros multiplos de 3 e 5
	
	for (x=0; x<10; x++) {
    	soma = soma + ((vetor[x]%3 == 0  || vetor [x] % 5 == 0)?vetor[x]:0);
      	qtd = qtd + ((vetor[x]%3 == 0  || vetor [x] % 5 == 0)?1:0);
    }
     
    printf("\nsoma = %i", soma);
    printf("\nqtd = %i", qtd);
    return (soma / qtd);
}


int main(){
	int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
	
	printf("\nMedia 3 e 5 = %.2f", Media3e5(vetor));
	
	return 0;
}
