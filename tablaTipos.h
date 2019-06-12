#ifndef TABLATIPOS_H
#define TABLATIPOS_H

struct tipoNodo {

    int id;	
    char *tipo;
    int tipoBase;
    int tamanio;
    int dimension;				
    struct tipoNodo *next;

};

typedef struct tipoNodo tablaTipo;

tablaTipo *headT, *anteriorT, *actualT;

int iDTipo;

void init_tableT();

tablaTipo *crear_Tipo(char *tipo, int tipoBase, int tamanio, int dimension);

void insertarTipo(tablaTipo *nuevo_Tipo);

void borrarTipo();

tablaTipo *buscarTipo(int id);

char *get_Tipo(int id);

int get_TipoBase(int id);

int get_Tamanio(int id);

int get_Dimension(int id);

#endif