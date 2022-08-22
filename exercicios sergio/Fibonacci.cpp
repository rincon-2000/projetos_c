#include<stdio.h>
main(){
	int num, f1=1, f2=1, f3;
	
	printf("\nDigite um numero:\n");	
	scanf("%d", &num);
	
	printf("Numero de fibonnachi: de 1 e 1\n");
	printf("Numero de fibonnachi: de 2 e 1\n");
	if(num==1||num==2){
		f3=1;
	}else{
		for(int i = 2; i < num; i++){
			f3=f2+f1;
			printf("Numero de fibonnachi: de %d e %d\n", i+1, f3);
			f1=f2;
			f2=f3;
		}
	}	
	return 0;
}
