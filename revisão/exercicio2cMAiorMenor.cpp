 #include <stdio.h>

int main(){
    int n= 0, pMaior=0, pMenor=9999999, vetor[100], soma =0;
    
    for (int i=0; i<1021; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf ("%i", &vetor[i]);
        
        soma = soma + vetor[i];
        
         if(vetor[i] > pMaior)
         	pMaior = vetor[i];
         
        if(vetor[i] < pMenor)
        	pMenor = vetor[i];
    }
     	
 	printf("\nNumero maior: %d", (soma/100));
 	printf("\nNumero maior: %d", pMaior);
 	printf("\nNumero menor: %d", pMenor);
}
