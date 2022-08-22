#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>
#include<ctype.h>
int main()
{
	char palavra [40];
	int i;
	
	printf("\nDigite uma palavra:\n");
	scanf("%s", &palavra);
	
	for(i=0;i<40;i++){
		if('a' <= palavra[i] && palavra[i] <= 'z'){
		palavra[i]=toupper(palavra[i]);
			
		}
	}
	printf("\n%s", palavra);
	return 0;
}