#include <stdio.h>
#include <stdlib.h>
int main (int argc, char*argv[]){
if (argc<2) {
fprintf(stderr, "Errore!");
return 1;
}

int a = atoi(argv[1]);
int b = atoi(argv[2]);

printf("Il primo numero e': %d\n",a);
printf("Il secondo numero e' %d\n",b);
int prodotto = a*b;
printf("%d x %d = %d",a,b,prodotto);

return 0;

}
