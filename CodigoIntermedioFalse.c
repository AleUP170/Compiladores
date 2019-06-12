#include "CodigoIntermedio.h"
#include <stdlib.h>

lista *newElementFalse(int indice){

    lista *nuevo = (lista *)malloc(sizeof(lista));
    nuevo->indice = indice;
    return nuevo;

}

void addIndiceFalse(int indice){

    pushIndiceFalse(newElementFalse(indice));

}

void pushIndiceFalse(lista *nuevo){

    if(headCIFalse == NULL){
        headCIFalse = nuevo;
        tailCIFalse = nuevo;
        nuevo->sig = NULL;
    }

    tailCIFalse->sig = nuevo;
    nuevo->sig = NULL;
    tailCIFalse = nuevo;

}

void delIndiceFalse(){

    lista *tempCI;

    do
    {
        tempCI = headCIFalse;
        headCIFalse = headCIFalse->sig;
        tempCI->sig = NULL;
        if(headCIFalse = tailCIFalse){
            tailCIFalse = tailCIFalse->sig;
        }
        free(tempCI);
    } while (headCIFalse != NULL);

}
