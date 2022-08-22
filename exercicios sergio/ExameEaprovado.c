#include <stdio.h>
int main()
{
 int nota;
 float a1 = 0,a2 = 0, a3=0, a4=0, soma, presenca = 0, media = 0, aulas, novaMedia, exame, percPres = 0;
 
 printf("Digite as notas:\n");
scanf("%f%f%f%f", &a1, &a2, &a3, &a4);
soma=a1+a2+a3+a4;
 
printf("\nDigite a quantidade de presenca:\n", presenca);
scanf("%f", &presenca);

printf("\nDigite a quantidade de aulas:\n", aulas);
scanf("%f", &aulas);

media=soma/4;
printf("a media eh de= %.2f\n",  media);

percPres = presenca/aulas;
	if(percPres>=0.75){
		if(media>=6){
			printf("\nAPROVADO");
		}else if(media>=2){//foi para exame
			printf("\nEXAME\n");
			printf("\nDigite a nota do Exame:\n");
			scanf("%f", &exame);
			novaMedia = (media+exame)/2;
			if(novaMedia>=6){
				printf("\nAPROVADO");
			}else{
				printf("\nREPROVADO");
			}
		}else{
			printf("REPROVADO");
		}	
	}else{
		printf("REPROVADO");
	}
	return 0;
}