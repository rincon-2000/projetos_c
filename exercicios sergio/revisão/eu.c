void funcao () {

int vetor[100]; 

int x,y,z, media;

for (x=0; x<= 100; x++) {

     scanf ("%d", &vetor[x]);

     z = z + (vetor[x]%2==0?vetor[x]:0);

} // for



y = 0;

for (x=0; x<= 100; x++) {

   if (vetor[x]%2==1 && (vetor[x]<media)) {

          y++;

          printf ("\n Abaixo media pares= %d", vetor[x]);

   }//if

} //for

    printf (" Quantidade de impares abaixo da média de pares =%d", x)

}// Funcao