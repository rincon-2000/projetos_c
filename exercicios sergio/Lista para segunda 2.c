#include<stdio.h>

void main () {
	
 int numero1 [10];

 int i, soma=0;
 
 for(i=0;i<10;i++) {
 	
 	printf ("digite o valor da posicao %i :\n",i);
 	
 	scanf("%i",&numero1[i]);
 	
 	soma=soma+numero1[i];	
 }
	printf("o valor da soma %i", soma);
}
