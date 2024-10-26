/*
 Calcolatrice v1 - programma che esegue le 4 operazioni semplici di n numeri (max 10) a scelta con uno switch-case

 switch (espressione) {
    case valore1:
        // Codice da eseguire se espressione == valore1
        break;  // Esce dallo switch

    case valore2:
        // Codice da eseguire se espressione == valore2
        break;  // Esce dallo switch

    // Puoi avere quanti più case desideri
    // ...

    default:
        // Codice da eseguire se nessun case corrisponde
        break;  // (opzionale, poiché l'uscita è già prevista)
}
 */
#include <stdio.h>
//Parametri funzioni
void somma (float *, int);
void sottrazione(float *, int);
void moltiplicazione(float *, int);
void divisione(float *, int);

int main() {
    float array[10];
    int n, i;
    int scelta;
    printf("Quanti numeri vuoi inserire (max 10)?\n");
    scanf("%d", &n);
    if (n > 10) {
        printf("Errore, sono stati inseriti piu' di 10 numeri");
        return 1;
    }
//Riempimento array
    for (i = 0; i < n; i++) {
        scanf("%f", &array[i]);
    }
//Stampa array
    for (i = 0; i < n; i++) {
        printf("%f ", array[i]);
    }
    printf("\n");
    //Calcolatrice
    printf("1. Somma\n");
    printf("2. Sottrazione\n");
    printf("3. Moltiplicazione\n");
    printf("4. Divisione\n");
    scanf("%d",&scelta);
    switch (scelta){
        case 1:
            somma(array,n);
            break;
        case 2:
            sottrazione(array,n);
            break;
        case 3:
            moltiplicazione(array,n);
            break;
        case 4:
            divisione(array,n);
            break;
    }
    return 0;
}
//Funzioni
void somma (float *array, int n) {
int i; float somma = 0;
for (i=0;i<n;i++) {
    somma += array[i];
}
printf("%f",somma);
}

void sottrazione (float *array, int n) {
    int i; float diff = array[0];  //diff va inizializzata a array[0] perchè se la inizializzo a 0 non ottengo il ris che voglio
    for (i=1;i<n;i++) {    //perchè sto aggiungendo una operazione in più al primo ciclo , ovvero 0 -
        diff -= array[i];  //inoltre per ottenere il ris corretto devo partire da i=1 nel ciclo
    }
    printf("%f",diff);
}

void moltiplicazione (float *array, int n) {
    int i; float mul = 1;
    for (i=0;i<n;i++) {
        mul = mul * array[i];
    }
    printf("%f",mul);
}

void divisione (float *array, int n) {
    int i; float div = array[0];
    for (i=0;i<n;i++) {
         div = div / array[i];
    }
    printf("%f",div);
}