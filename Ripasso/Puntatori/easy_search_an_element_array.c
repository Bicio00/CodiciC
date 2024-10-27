#include <stdio.h>
#define N 10
void crea_array(int *,int* );
void stampa_array(int *,int *);
void search_elements(int *, int *);

int main () {
    int vett[N];
    int n;
    crea_array(vett,&n);  //Passo l'indirizzo di memoria dove n è memorizzato
    stampa_array(vett,&n);
    printf("\n");
    search_elements(vett,&n);

    return 0;
}
void crea_array(int vett[], int * ptr) {  //devo passare un puntatore ptr perchè nel main n non è inizializzata
    do {                                //a meno che non la restituisco al main come un int (return n) devo usare per forza i puntatori, passando &n da main faccio puntare
        printf("Celle: ");             //ptr all'indirizzo di memoria di n (int * ptr = &n)
        scanf("%d", ptr);              //Il main si accorge delle operazioni che fa la funzione perchè passando l'indirizzo
    }while(*ptr<=0 || *ptr > N);       //al primo elemento dell'array , sto agendo proprio sull'indirizzo di memoria di vett[]

    for (int i=0; i<*ptr; i++) {
        scanf("%d",&vett[i]);
    }
}

void stampa_array (int vett[], int * ptr) {
    int i;
    for(i=0; i<*ptr; i++) {
        printf("%d ", vett[i]);
    }
}

void search_elements(int vett[], int * ptr) {
    int search;
    printf("Inserisci un valore: ");
    scanf("%d",&search);
    for (int i=0;i<*ptr;i++) {
       if (search == vett[i]) {
           printf("%d si trova nella posizione %d\n", search, i);
       }else{
           printf("%d non e' presente in posizione %d\n",search,i);
       }
    }
}
