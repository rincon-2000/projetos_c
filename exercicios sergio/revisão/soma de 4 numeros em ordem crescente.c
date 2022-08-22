#include<stdio.h>
int main()
{
	int a1, b2, c3, d4, soma;
			
	printf("\nDigite o primeiro numero:");
	scanf("%i", &a1);
	
	printf("\nDigite o segundo numero:");
	scanf("%i", &b2);
	
	printf("\nDigite o terceiro numero:");
	scanf("%i", &c3);
	
	printf("\nDigite o quarto numero:");
	scanf("%i", &d4);
	
 while(a1>=b2){

		printf("\nDigite para a1 um numero menor que o b2:");
		scanf("%i",&a1);

	}while(b2>=c3){
	
		printf("\nDigite para b2 um numero menor que o c3:");
		scanf("%i",&b2);

	}while(c3>=d4){
	
		printf("\nDigite para c3 um numero menor que o c4:");
		scanf("%i",&c3);
	}
	soma=a1+b2+c3+d4;
	
	printf("\nA soma e: %i\n",soma);
}
