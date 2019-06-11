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

tablaTipo *crear_Tipo(const char *tipo, int tipoBase, int tamanio, int dimension);

void insertarTipo(tablaTipo *nuevo_Tipo);

void borrarTipo();

tablaTipo *buscarTipo(int id);

char *get_Tipo(const char *id);

int get_TipoBase(const char *id);

int get_Tamanio(const char *id);

int get_Dimension(const char *id);

#endif