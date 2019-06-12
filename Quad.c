#include "Quad.h"
#include <stdlib.h>

quad * newQuad(char *op, char *arg1, char *arg2, char *res){

    quad *nuevoQuad =  (quad *)malloc(sizeof(quad));

    strcpy(nuevoQuad->op, op); 
    strcpy(nuevoQuad->arg1, arg1);
    strcpy(nuevoQuad->arg2, arg2);
    strcpy(nuevoQuad->res, res);

    return nuevoQuad;

}

void addQuad(char *op, char *arg1, char *arg2, char *res){

    pushQuad(newQuad(op, arg1, arg2, res));

}

void pushQuad(quad *nuevoQuad){

    if(headQ == NULL){
        headQ = nuevoQuad;
        tailQ = nuevoQuad;
        nuevoQuad->sigQ = NULL;
        return;
    }
    
    tailQ->sigQ = nuevoQuad;
    nuevoQuad->sigQ = NULL;
    tailQ = nuevoQuad;

}

void delQuad() {

    quad *tempQ;

    do{

        tempQ = headQ;
        headQ = headQ->sigQ;
        tempQ->sigQ = NULL;
        if(headQ == tailQ){
            tailQ = tailQ->sigQ;
        }
        free(tempQ);

    }while(headQ != NULL);
}