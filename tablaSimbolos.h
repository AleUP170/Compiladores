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

void init_tableS();

void crear_Simbolo(char *id, int tipo, char *tipoVar, int direccion, int tipoArgumts, int numArgumts, char *ambito);

void insert_Simbolo(simboloTipo *nuevo_Simbolo);

void del_Simbolo();

simboloTipo* buscar_Simbolo(char *id);

int get_TipoSim(char *id);

int get_Direccion(char *id);

int get_TipoArgumts(char *id);

int get_numArgumts(char *id);

char *get_TipoVar(char *id);

#endif