 #include <stdio.h> 

int Media3e5 (int vetor[10]) { // passado como parametro um vetor com 10 posicoes ja preenchido
      int x; // usado para percorrer o vetor
      int qtd; // usado para saber quantos numeros multiplos de 3 e 5
      int soma; // usado para somar os numeros multiplos de 3 e 5

     for (x=0; x<10; x++) {
              soma = soma + ((vetor[x]%3 == 0  || vetor [x] % 5 == 0)?vetor[x]:0);
              qtd = qtd + ((vetor[x]%3 == 0  || vetor [x] % 5 == 0)?1:0);
     }
     return (soma / qtd);
}

int main(){
	
	
}
