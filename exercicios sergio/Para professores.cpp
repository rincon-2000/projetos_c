#include <stdio.h>
main()
{
	float notas[3] = {0};
	float total = 0;
	float media = 0;
	float percPres = 0;
	float exame;
	float notaExame;
	float novaMedia;
	int presenca;
	int aulas;
	
	printf("Digite 4 notas:\n");
	for(int i = 0; i<4; ++i){
		scanf("%f", &notas[i]);
	}
	
	for(int i = 0; i<4; ++i){
		total+= notas[i];
	}
	
	media = total/4;{

	printf("A media do aluno e: %.2f", media);}


	printf("\nDigite a quantidade de presenca do aluno:\n");
	scanf("%f", &presenca);
	
	printf("\nDigite a quantidade de aulas do curso:\n");
	scanf("%f", &aulas);

	percPres = presenca/aulas;
	if(percPres>=0.75){
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
