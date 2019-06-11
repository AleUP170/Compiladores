#ifndef CODIGOINTERMEDIO_H
#define CODIGOINTERMEDIO_H

#include "Quad.h"

struct listas{

    int indice;
    struct listas *sig;

};

typedef struct listas lista;

lista *headCI, *nextCI, *tailCI;

lista *headCIFalse, *nextCIFalse, *tailCIFalse;

lista *headCITrue, *nextCITrue, *tailCITrue;

lista *newElement(int indice);
void addIndice(int indice);
void pushIndice(lista *nuevo);
void delIndice();

lista *newElementTrue(int indice);
void addIndiceTrue(int indice);
void pushIndiceTrue(lista *nuevo);
void delIndiceTrue();

lista *newElementFalse(int indice);
void addIndiceFalse(int indice);
void pushIndiceFalse(lista *nuevo);
void delIndiceFalse();


lista *combinar(lista *lista1, lista *lista2);
void backpatch(lista *lista1, char *label);

#endif