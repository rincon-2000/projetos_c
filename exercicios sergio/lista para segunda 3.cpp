#include<stdio.h>

main(){
	
int  numero1[20];
int numero2[20];
int numero3[20];
int i;

for(i=0;i<20;i++){

	
	printf("digite numero do primeiro vetor:%i\n", i);
	scanf ("%i", &numero1[i]);}
	
for(i=0;i<20;i++){

	
	printf("digite numero do segundo vetor: %i\n", i);
	scanf ("%i", &numero2[i]);}

for(i=0;i<20;i++){

	numero3[i]=numero1[i]*numero2[i];
	printf ("O valor da multiplicacao e %i\n", numero3[i]);
	}
}
