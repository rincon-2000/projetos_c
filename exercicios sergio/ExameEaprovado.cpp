#include <stdio.h>
int main()
{
 int nota;
 float a1,a2,a3,a4, soma, presenca, media, aulas, novaMedia, exame, PercentualPresenca;
 
 printf("Digite as notas: ");
scanf("%f%f%f%f", &a1, &a2, &a3, &a4);
soma=a1+a2+a3+a4;
 
printf("\nDigite a quantidade de presenca:\n", presenca);
scanf("%d", &presenca);

printf("\nDigite a quantidade de aulas:\n", aulas);
scanf("%d", &aulas);

media=soma/4;
printf("a media eh de= %.2f",  media);

PercentualPresenca = presenca/aulas;
if (media >= 6 && presenca>= 0.75){
		printf("\nAPROVADO");
	
	if(PercentualPresenca>=0.75){
		if(media>=6){
			printf("\nAPROVADO");
		}else if(media>=2){//foi para exame
			printf("EXAME");
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
}