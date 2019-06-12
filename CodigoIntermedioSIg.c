#include "CodigoIntermedio.h"
#include <stdlib.h>


lista *newElement(int indice){

    lista *nuevo = (lista *)malloc(sizeof(lista));
    nuevo->indice = indice;
    return nuevo;

}

void addIndice(int indice){

    pushIndice(newElement(indice));

}

void pushIndice(lista *nuevo){

    if(headCI == NULL){
        headCI = nuevo;
        tailCI = nuevo;
        nuevo->sig = NULL;
    }

    tailCI->sig = nuevo;
    nuevo->sig = NULL;
    tailCI = nuevo;

}

void delIndice(){

    lista *tempCI;

    do
    {
        tempCI = headCI;
        headCI = headCI->sig;
        tempCI->sig = NULL;
        if(headCI = tailCI){
            tailCI = tailCI->sig;
        }
        free(tempCI);
    } while (headCI != NULL);

}
/* 
    Recibe dos apuntadores los cuales hacen referencia al inicio de cada lista
    y une la segunda lista al final de la primera
*/
lista *combinar(lista *lista1, lista *lista2){

    lista *nuevo = lista1;

    if(lista1 == NULL){
        nuevo = lista2;
        return nuevo;
    }
    if(lista2 != NULL){

        lista *tempLista = lista1;
        while (tempLista->sig != NULL)
        {
            tempLista = tempLista->sig; 
        }
        tempLista->sig = lista2;
    }
    return nuevo;
}

void backpatch(lista *lista1, char *label){

    quad *tempQ = headQ;

    do
    {
        strcpy(tempQ->res, label);
        tempQ = tempQ->sigQ;
    } while (tempQ != NULL);
    
}