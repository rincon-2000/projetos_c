#include<stdio.h>

void main (){

int numero1 [16];

int i,n0,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15;

for(i=0;i<16;i++){
	
	printf("digite o valor da posicao %i\n",i);
	scanf("%i",&numero1[i]);
}	
    n0=numero1[0];
	n1=numero1[1];	
	n2=numero1[2];
	n15=numero1[15];
	n3=numero1[3];
	n4=numero1[4];
	n5=numero1[5];
	n6=numero1[6];
	n7=numero1[7];
	n8=numero1[8];
	n9=numero1[9];
	n10=numero1[10];
	n11=numero1[11];
	n12=numero1[12];
	n13=numero1[13];
	n14=numero1[14];
	
	numero1[0]=n15;
	numero1[1]=n14;	
	numero1[2]=n13;
	numero1[15]=n0;
	numero1[3]=n12;
	numero1[4]=n11;
	numero1[5]=n10;
	numero1[6]=n9;
	numero1[7]=n8;
	numero1[8]=n7;
	numero1[9]=n6;
	numero1[10]=n5;
	numero1[11]=n4;
	numero1[12]=n3;
	numero1[13]=n2;
	numero1[14]=n1;
	
	
	for (i=0;i<16;i++){	
		printf("valor do vetor %i\n",numero1[i]);
	}
}
