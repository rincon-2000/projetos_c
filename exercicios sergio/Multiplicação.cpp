#include <stdio.h>
int main() 
{
int a, b, div;
printf ("\nDigite dois numeros:");
scanf("%f%f", &a, &b);
div=a/b;

if(b==0){
	printf("\nDigite outro numero:");
	scanf("%f", &b);
}
printf("\n%f", div);
    
}