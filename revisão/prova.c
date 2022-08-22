int Media3e5 (int vetor[10]) { 
    int x; 
	int qtd = 0;
	int soma = 0; 

    for (x=0; x<10; x++) 
	{
    	soma = soma + ((vetor[x]%3 != 0  && vetor [x] % 5 != 0) ? vetor[x] : 0);
        qtd = qtd + ((vetor[x]%3 != 0  && vetor [x] % 5 != 0) ? 1 : 0);
    }
    return (soma / qtd);
}
int main(){
	int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
	
	printf("\nMedia 3 e 5 = %.2f", Media3e5(vetor));
	
	return 0;
}