#include<stdio.h>

numerosImpares()
	{
	int numero=1;
	printf("\n%i", (numero%2!=0)?1:0);
	}
	
int main()
	{
	int i;
	for(i=1; i<100000;i++){
		numerosImpares();
		}	
	}