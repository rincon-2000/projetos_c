#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>
#include <iostream>
#include<ctype.h>
void vogal()
{
	char letra;
	do{
		printf ("\n Digite algo:\n%s\n",letra);
	       scanf ("%s", &letra);
	       
	       if (letra!='a'||'b'||'c'||'d'||'e'||'f'||'g'||'h'||'i'||'j'||'k'||'l'||'m'||'n'||'o'||'p'||'q'||'r'||'s'||'t'||'u'||'v'||'w'||'x'||'y'||'z'){//'a' == toupper(letra)
		break;	       	
	} 
	while('a' == toupper(letra)
		    || 'b' == toupper(letra)
			|| 'c' == toupper(letra)
			|| 'd' == toupper(letra)
			|| 'e' == toupper(letra)
			|| 'f' == toupper(letra)
			|| 'g' == toupper(letra)
			|| 'h' == toupper(letra)
			|| 'i' == toupper(letra)
			|| 'j' == toupper(letra)
			|| 'k' == toupper(letra)
			|| 'l' == toupper(letra)
			|| 'm' == toupper(letra)
			|| 'n' == toupper(letra)
			|| 'o' == toupper(letra)
			|| 'p' == toupper(letra)
			|| 'q' == toupper(letra)
			|| 'r' == toupper(letra)
			|| 's' == toupper(letra)
			|| 't' == toupper(letra)
			|| 'u' == toupper(letra)
			|| 'v' == toupper(letra)
			|| 'w' == toupper(letra)
			|| 'x' == toupper(letra)
			|| 'y' == toupper(letra)
			|| 'z' == toupper(letra));
		printf("\n%s\n");
}