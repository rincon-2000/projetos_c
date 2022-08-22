#include<stdio.h>
int x = 0;
int quant;
int somar;

float Media3e5 (int vetor[10]) { 

for (x=0; x<10; x++) {
somar = somar + ((vetor[x]%3 != 0 ||vetor [x] % 5 != 0)?vetor[x]:0);
quant = quant + ((vetor[x]%3 != 0 ||vetor [x] % 5 != 0)?1:0);
}

printf("\nsoma = %i", somar);
printf("\nqtd = %i", quant);
return (somar / quant);
}

int main(){
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("\nMedia 3 e 5 = %.2f", Media3e5(vetor));

    return 0;
}