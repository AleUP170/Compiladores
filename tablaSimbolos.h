#ifndef TABLASIMBOLOS_H
#define TABLASIMBOLOS_H


struct simboloNodo {

	int posicion;		
    char *id;
    int tipo;
    char *tipoVar;
    int direccion;
    int tipoArgumts;
    int numArgumts;		
    char *ambito;		
    struct simboloNodo *next;
    struct simboloNodo *prev;
    struct simboloNodo *nextAmbito;
    struct simboloNodo *prevAmbito;

};

typedef struct simboloNodo simboloTipo;

simboloTipo *head, *anterior, *actual;

int iD;

void crear_Simbolo(const char *id, int tipo, char *tipoVar, int direccion, int tipoArgumts, int numArgumts, char *ambito);

void insert_Simbolo(simboloTipo *nuevo_Simbolo);

void del_Simbolo();

simboloTipo *buscar_Simbolo(const char *id);

int get_Tipo(const char *id);

int get_Direccion(const char *id);

int get_TipoArgumts(const char *id);

int get_numArgumts(const char *id);

char *get_TipoVar(const char *id);

#endif