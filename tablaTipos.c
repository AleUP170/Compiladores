#include "tablaTipos.h"
#include <string.h>
#include <stdlib.h>

void init_tableT() {
	headT = NULL;
    actualT = NULL;
    anteriorT = NULL;
    iDTipo = 0;

    crear_Tipo("void",-1,0,-1);
    crear_Tipo("char",-1,1,-1);
    crear_Tipo("int",-1,4,-1);
    crear_Tipo("float",-1,8,-1);
    crear_Tipo("double",-1,16,-1);

}

tablaTipo *crear_Tipo(char *tipo, int tipoBase, int tamanio, int dimension){

    tablaTipo *nuevo_Tipo = (tablaTipo *)malloc(sizeof(tablaTipo));

    nuevo_Tipo->id = iDTipo;
    strcpy(nuevo_Tipo->tipo, tipo);
    nuevo_Tipo->tipoBase = tipoBase;
    nuevo_Tipo->tamanio = tamanio;
    nuevo_Tipo->dimension = dimension;

    iDTipo++;

    return nuevo_Tipo;

}

void insertarTipo(tablaTipo *nuevo_Tipo){

    if(headT = NULL){
        nuevo_Tipo->next = NULL;
        headT = nuevo_Tipo;
    }
    actualT = headT;
    anteriorT = headT;
    while (actualT != NULL)
    {
        anteriorT = headT;
        actualT = actualT->next;
    }
    if(actualT == NULL && anteriorT != NULL){

        anteriorT->next = nuevo_Tipo;
        nuevo_Tipo->next = NULL; 
        anteriorT = NULL;
        actualT = NULL;
    }
}

void borrarTipo(){

    while (headT != NULL)
    {
        actualT = headT;
        headT = headT->next;
        free(actualT);
    }
    actualT = NULL;
    headT = NULL;
}

tablaTipo *buscarTipo(int id){

    actualT = headT;

    while(actualT != NULL){
        if(actualT->id == id){
            return actualT;
        }
        actualT = actualT->next;
    }

    return 0; 
}

char *get_Tipo(int id){

    tablaTipo *cur = buscarTipo(id);

    return buscarTipo(id) ? (*cur).tipo : 0;
}

int get_TipoBase(int id){

    tablaTipo *cur = buscarTipo(id);

    return buscarTipo(id) ? (*cur).tipoBase : 0;
}

int get_Tamanio(int id){

    tablaTipo *cur = buscarTipo(id);

    return buscarTipo(id) ? (*cur).tamanio : 0;
}

int get_Dimension(int id){

    tablaTipo *cur = buscarTipo(id);

    return buscarTipo(id) ? (*cur).dimension : 0;
}

