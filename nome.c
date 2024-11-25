#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5
typedef struct{
    int numero;

}struttura;

void carica();
void stampa();
void correggi();

int main(){

    FILE *file = fopen("es1.dat.txt","rwb");
    if(file==NULL){
        printf("impossibile aprire il file");
        return 1;
    }
}

void carica(struttura[], FILE*file){
    int i;
    for(i=0;i<N;i++){
        scanf("%d",&struttura[i].numero);

    }
}
