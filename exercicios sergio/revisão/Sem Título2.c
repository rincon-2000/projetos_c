void Funcao () {

	int vetor[5]; 

	int x,y = 0,z = 0, media;

	for (x=0; x< 5; x++) {
		printf("Digite 100 numeros inteiros: ");
		 scanf ("%d", &vetor[x]);

		 z = z + (vetor[x]%2==0?vetor[x]:0);
		 y = y + (vetor[x]%2==0?1:0);

	} // for

	media = z/y;
	
	y = 0;

	for (x=0; x< 5; x++) {

	   if (vetor[x]%2==1 && (vetor[x]<media)) {

			  y++;

			  printf ("\n Abaixo da media pares= %d", vetor[x]);

	   }//if

	} //for

	printf ("\n Quantidade de impares abaixo da media de pares =%d", y);

}// Funcao
int main(){

  Funcao();
  return 0;
}