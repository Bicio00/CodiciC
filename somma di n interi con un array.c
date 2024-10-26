#include <stdio.h>
#define N 20
int main() {
int n, array[N];
printf("Numeri:\n ");
scanf("%d",&n);
//Controllo dim array
if (n>20) {
    printf("Errore!, i numeri devono essere massimo 20!");
    return 1;
}
//Riempimento array
int i;
for(i=0; i<n; i++ ) {
printf("Numero %d: ",i);
scanf("%d",&array[i]);
}
//Stampa array
    for(i=0; i<n; i++ ) {
        printf("%d ", array[i]);
    }
//Somma dei n numeri inseriti dall'utente
int somma = 0;
    for(i=0; i<n; i++ ) {
       somma = somma+array[i];
    }
    printf("Somma: %d",somma);
 return 0;
}