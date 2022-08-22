#include<stdio.h>
main()
{
	float nota1, nota2, nota3, nota4, presenca, percPres, aulas, soma, media, novaMedia, exame;
	
	printf("Digite as notas:\n", nota1, nota2, nota3, nota4);
	scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);
	
	soma=nota1+nota2+nota3+nota4;
	
	media=soma/4;{
	printf("\nA media do aluno e:%2.f", media);}
	
	printf("\nDigite a quantidade de presenca:\n", presenca);
	scanf("%f", &presenca);
	
	printf("Digite a quantidade de aulas:\n", aulas);
	scanf("%f", &aulas);
	percPres=presenca/aulas;
	if (media>=6 && percPres>=0.75){
	printf("\nAPROVADO");
	novaMedia= media/exame;}
		else (media<6 && media>=2 && percPres>0.75);{
		printf("\nEXAME");}
		
		if (novaMedia>6){
		printf("\nAPROVADO");
		}else{
		printf("\nREPROVADO");
		}if(media<2||presenca<0.75){
		printf("\nREPROVADO");
}
}
	