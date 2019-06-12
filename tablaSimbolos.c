#include "tablaSimbolos.h"
#include <stdlib.h>
#include <string.h>

void init_tableS() {
	head = NULL;
    actual = NULL;
    anterior = NULL;
    iD = 0;
}

void crear_Simbolo(char *id, int tipo, char *tipoVar, int direccion, int tipoArgumts, int numArgumts, char *ambito){

    simboloTipo *nuevo_Simbolo = (simboloTipo *)malloc(sizeof(simboloTipo));


    nuevo_Simbolo->posicion = iD;
    nuevo_Simbolo->id = id;
    nuevo_Simbolo->tipo = tipo;
    nuevo_Simbolo->tipoVar = tipoVar;
    nuevo_Simbolo->direccion = direccion;
    nuevo_Simbolo->tipoArgumts = tipoArgumts;
    nuevo_Simbolo->numArgumts = numArgumts;
    nuevo_Simbolo->ambito = ambito;
    nuevo_Simbolo->nextAmbito = NULL;
    nuevo_Simbolo->next = NULL;

    ++iD;

    insert_Simbolo(nuevo_Simbolo);

}

void insert_Simbolo(simboloTipo *nuevo_Simbolo){


    if(head == NULL){

        nuevo_Simbolo->next = NULL;
        nuevo_Simbolo->prev = NULL;
        nuevo_Simbolo->nextAmbito = NULL;
        nuevo_Simbolo->prevAmbito = NULL;
        head = nuevo_Simbolo;
        anterior = nuevo_Simbolo;
        actual = nuevo_Simbolo;
        return; 
    }
    anterior = head;
    actual = head;
    do{
        if(strcmp(nuevo_Simbolo->ambito, actual->ambito)){
            
            while(actual != NULL){
                anterior = actual;
                actual = actual->next;
            }
            if(actual == NULL){
                nuevo_Simbolo->prev = anterior; 
                nuevo_Simbolo->next = actual;
                nuevo_Simbolo->nextAmbito = NULL;
                nuevo_Simbolo->prevAmbito = NULL;
            }
        }
        else{
            if(actual->nextAmbito == NULL){
                actual->nextAmbito = nuevo_Simbolo;
                nuevo_Simbolo->prev = NULL; 
                nuevo_Simbolo->next = NULL;
                nuevo_Simbolo->nextAmbito = NULL;
                nuevo_Simbolo->prevAmbito = anterior;
            }
            else{
                anterior = actual;
                actual = actual->nextAmbito; 
            }
        }
    }while(actual != head);
}

void del_Simbolo(){

    anterior = head;
    actual = head;

    while(actual != NULL){
        anterior = actual;
        actual = actual->nextAmbito;
    }

    do{

        actual = anterior;
        do{
            while (actual != NULL)
            {
                anterior = actual;
                actual = actual->nextAmbito;
            }
            do{

                actual = anterior;
                if(anterior->prev == NULL && anterior->prevAmbito != NULL){
                    anterior = anterior->prevAmbito;
                    anterior->nextAmbito = NULL;
                    actual->prevAmbito = NULL;
                    free(actual);
                    actual = anterior;
                }
                else{
                    anterior = anterior->prev;
                    anterior->next = NULL;
                    actual->prev = NULL;
                    free(actual);
                }            
            }while(actual != anterior);
        }while (anterior->prevAmbito != NULL && anterior->next != NULL);
    }while(head != NULL);
}

simboloTipo* buscar_Simbolo(char *id){

    anterior = head;
    actual = head;
    do
    {
        while (actual != NULL){
            if(strcmp(actual->id,id)){
                return actual;
            }
            actual = actual->next;
        }
        anterior = anterior->nextAmbito;
        actual = anterior; 
    }while (anterior->nextAmbito != NULL);
    return NULL;
}

int get_TipoSim(char *id){

    simboloTipo *cur = buscar_Simbolo(id);

    return buscar_Simbolo(id) ? (*cur).tipo : 0;
}

int get_Direccion(char *id){

    simboloTipo *cur = buscar_Simbolo(id);

    return buscar_Simbolo(id) ? (*cur).direccion : 0;
}

int get_TipoArgumts(char *id){

    simboloTipo *cur = buscar_Simbolo(id);

    return buscar_Simbolo(id) ? (*cur).tipoArgumts : 0;
}

int get_numArgumts(char *id){

    simboloTipo *cur = buscar_Simbolo(id);

    return buscar_Simbolo(id) ? (*cur).numArgumts : 0;
}

char *get_TipoVar(char *id){

    simboloTipo *cur = buscar_Simbolo(id);

    return buscar_Simbolo(id) ? (*cur).tipoVar : 0;
}

char *get_Ambitor(char *id){

    simboloTipo *cur = buscar_Simbolo(id);

    return buscar_Simbolo(id) ? (*cur).ambito : 0;
}