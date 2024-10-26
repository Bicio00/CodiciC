#include <stdio.h>
#include <stdlib.h> 

int main (int argc, char *argv[]) {
if (argc<3) {
fprintf(stderr,"Errore!");
return 1;
}

int * array;
array = (int*)malloc(argc-1 * sizeof(int)); //Sbagliato scrivere argv-1 perchè argv è un array di strighe
if (array == NULL) {
printf("Errore nella locazione della memoria!\n");
return 2;
}
int i;
for(i=1; i<argc; i++) { //Sbagliato dichiarare int i dentro il for quando la i la devo usare anche in altri cicli. Se dichiarata dentro il for la i è vista esclusivamente dentro quello
/*
*(array)= atoi(argv[i]);
array++;                -> Sbagliato scrivere così perchè sto spostando il puntatore all'array,in questo modo quando devo svuotare la memoria non svuoterò il blocco che mi interessa
                            è molto meglio metter un indice  

*/
array[i-1] = atoi(argv[i]);

}

int prodotto = 1;
for (i=1; i<argc; i++) {

//prodotto = prodotto * argv[i]; -> Sbagliato in quanto  sto cercando di fare i calcoli con le stringhe passate da terminale
prodotto = prodotto * array[i-1];

}
printf("Il prodotto dei %d numeri è': %d",argc-1,prodotto); // argc-1, non argc perchè comprende anche il nome del programma
free(array);
array = NULL;

return 0;
}
