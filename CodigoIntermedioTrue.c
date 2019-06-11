#include "CodigoIntermedio.h"


lista *newElementTrue(int indice){

    lista *nuevo = (lista *)malloc(sizeof(lista));
    nuevo->indice = indice;
    return nuevo;

}

void addIndiceTrue(int indice){

    pushIndiceTrue(newElementTrue(indice));

}

void pushIndiceTrue(lista *nuevo){

    if(headCITrue == NULL){
        headCITrue = nuevo;
        tailCITrue = nuevo;
        nuevo->sig = NULL;
    }

    tailCITrue->sig = nuevo;
    nuevo->sig = NULL;
    tailCITrue = nuevo;

}

void delIndiceTrue(){

    lista *tempCI;

    do
    {
        tempCI = headCITrue;
        headCITrue = headCITrue->sig;
        tempCI->sig = NULL;
        if(headCITrue = tailCITrue){
            tailCITrue = tailCITrue->sig;
        }
        free(tempCI);
    } while (headCITrue != NULL);

}
/* 
    Recibe dos apuntadores los cuales hacen referencia al inicio de cada lista
    y une la segunda lista al final de la primera
*/
