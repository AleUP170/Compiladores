#ifndef QUAD_H
#define QUAD_H
#include <string.h>
#include <stdio.h>


struct quads
{
    char *op;
	char *arg1;
	char *arg2;
	char *res;
    struct quads *sigQ; 
};

typedef struct quads quad;

quad *headQ, *nextQ, *tailQ;

quad newQuad(char *op, char *arg1, char *arg2, char *res);
void addQuad();
void pushQuad(quad *nuevoQuad);
void delQuad();

#endif
