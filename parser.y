%{
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include "tablaSimbolos.h"
    #include "tablaTipos.h"
    #include "Quad.h"
    #include "CodigoIntermedio.h"
    extern int yylex();
    void yyerror(char *s);

    int labelCounter = 0, tempCounter = 0;
    char createdLabel[15], createdTemp[15];

    char* newLabel();
    char* newTemp(); 
    void amp(char *dir, int t1, int t2, char* res);
    int min(int a, int b);
    int max(int a, int b)
%}

%union{
    char id[32];
    /// Se necesitan declrara las listas

    /// lista siguiente

    /*struct{
        lista *headCIFalse, *nextCIFalse, *tailCIFalse;
        lista *headCITrue, *nextCITrue, *tailCITrue;
    }boolean;*/
    
    struct{
        char *tipo;
        int tipoBase;
        int tamanio;
        int dimension;	    
    } tipo;

    struct{
        char dir[32];
        int tipo;
    }expresion;
    
    struct{
        char valor[64];
        int tipo;
    }num;
    
    char op[32];
}

%token<id> ID /* id */
%token COMMA POINT SCOLON COLON /* , . ; :*/
%token INT FLOAT DOUBLE CHAR VOID STRUCT
%token IF ELSE WHILE DO SWITCH CASE 
%token RETURN BREAK PRINT DEFAULT FUNC
%token TRUE FALSE
%token<num> INTNUM HEXNUM DECNUM EXPNUM 
%token CONSCHAR CONSSTRING

%nonassoc LPAR RPAR LBRA RBRA LCUR RCUR /*  ( ) [ ] { } */
%nonassoc IFX ELSE 

%right NOT /* ! */ PLUS2 /* ++ */ MINUS2 /* -- */
%left MUL /* * */ DIV /* / */ MOD /* % */

%left PLUS /* + */ MINUS /* - */
%left<op> LESS /* < */  LESSEQ /* <= */ MOREEQ /* >= */ MORE /* >*/
%left<op> EQUAL2 /* == */ NOTQ /* != */
%left AND /* && */
%left OR /* || */
%right EQUAL /* = */

%type<tipo> type array functs
%type<expresion> exprc
%type<boolean> condic
%type<siguList>

%start programa

%%

programa: declarns {
            init_tableS();
            init_tableT();
            
        } functs {
            printf("Se realizo correctamente el análisis\n");
        }
        ;

declarns: type list {
            $2.tipo = $1.tipo;
            $2.dimension = $1.dimension;
        }
        |
        ;

type: VOID {
        $$.tipo = 0; 
        $$.tamanio = 1;
        }
    | CHAR {
        $$.tipo = 1; 
        $$.tamanio = 2;
        }
    | INT {
        $$.tipo = 2; 
        $$.tamanio = 4;
        }
    | FLOAT {
        $$.tipo = 3; 
        $$.tamanio = 8;
        }
    | DOUBLE {
        $$.tipo = 4;
        $$.tamanio = 16;
        }
    | STRUCT LCUR declarns RCUR {
            $$.tipo = 5;
            //$$.tamanio = $2.tamanio;
        }
    ;

list: list COMMA ID array {
        
        

    }
    | ID array {

    }
    ;

array: { 
        $$.tipo =  $$.base;
     }
     | LBRA INTNUM RBRA array {
            tablaTipo *t;
        if($2. == 2){
                insertarTipo(crear_Tipo(iDTipo, "array", $4.tipo , $4.tamanio * $2.valor, $2.valor) );
        }
        }else{
	 	    yyerror("La dimensión debe de ser un valor entero");
	    }
     ;

functs: | type ID LPAR argumts RPAR LCUR declarns sentns RCUR functs {

        }
        ;

argumts: | listArgumts 
         ;

listArgumts: listArgumts COMMA ID partArray 
           | type ID partArray 
           ;

partArray: | LBRA RBRA partArray 
           ;

sentns: sentns {
            addQuad("label", "", "", "__");
        } sentns {
            addQuad("label", "", "", "__");
        }
      | IF LPAR condic RPAR {
            addQuad("label", "", "", "__");

      } sentns {
            addQuad("goto", "", "", "__");

      } sentnspri {$$ = $}
      | WHILE LPAR {
            addQuad("label", "", "", "__");

      } condic RPAR {
            addQuad("label", "", "", "__");

      } sentns {

            addQuad("goto", "", "", etiqueta);
      }
      | DO sentns WHILE LPAR condic RPAR SCOLON
      | FOR LPAR sentns SCOLON condic SCOLON sentns RPAR sentns
      | partLeft EQUAL exprc SCOLON
      | RETURN exprc SCOLON
      | RETURN SCOLON
      | LCUR sentns RCUR
      | SWITCH LPAR exprc RPAR LCUR cases predeterm RCUR
      | BREAK SCOLON
      | PRINT exprc SCOLON 
      ;

sentnspri: %prec IFX | ELSE {
            addQuad("label", "", "", "__");
        } sentns;

cases: CASE COLON INTNUM sentns predeterm 
     |
     ;

predeterm: DEFAULT COLON sentns 
         |
         ;

partLeft: ID {
            
        }
        | varArray 
        | ID POINT ID 
        ;

varArray: ID LBRA exprc RBRA 
        | varArray LBRA exprc RBRA 
        ;

exprc: exprc PLUS exprc {
        $$.tipo = max($1.tipo, $3.tipo);
        strcpy($$.dir , newTemp());
        char dirAlpha1[20], dirAlpha2[20];   
        amp($1.dir, $1.tipo, $$.tipo, dirAlpha1);
        amp($3.dir, $3.tipo, $$.tipo, dirAlpha2);
        fprintf(yyout, "%s = %s + %s\n", $$.dir, dirAlpha1, dirAlpha2);
     }
     | exprc MINUS exprc {
        $$.tipo = max($1.tipo, $3.tipo);
        strcpy($$.dir , newTemp());
        char dirAlpha1[20], dirAlpha2[20];   
        amp($1.dir, $1.tipo, $$.tipo, dirAlpha1);
        amp($3.dir, $3.tipo, $$.tipo, dirAlpha2);
        fprintf(yyout, "%s = %s - %s\n", $$.dir, dirAlpha1, dirAlpha2);
     }
     | exprc MUL exprc {
        $$.tipo = max($1.tipo, $3.tipo);
        strcpy($$.dir , newTemp());
        char dirAlpha1[20], dirAlpha2[20];   
        amp($1.dir, $1.tipo, $$.tipo, dirAlpha1);
        amp($3.dir, $3.tipo, $$.tipo, dirAlpha2);
        fprintf(yyout, "%s = %s * %s\n", $$.dir, dirAlpha1, dirAlpha2);
     }
     | exprc DIV exprc {
        $$.tipo = max($1.tipo, $3.tipo);
        strcpy($$.dir , newTemp());
        char dirAlpha1[20], dirAlpha2[20];   
        amp($1.dir, $1.tipo, $$.tipo, dirAlpha1);
        amp($3.dir, $3.tipo, $$.tipo, dirAlpha2);
        fprintf(yyout, "%s = %s / %s \n", $$.dir, dirAlpha1, dirAlpha2);
     }
     | exprc MOD exprc {
        $$.tipo = max($1.tipo, $3.tipo);
        strcpy($$.dir , newTemp());
        char dirAlpha1[20], dirAlpha2[20];   
        amp($1.dir, $1.tipo, $$.tipo, dirAlpha1);
        amp($3.dir, $3.tipo, $$.tipo, dirAlpha2);
        fprintf(yyout, "%s = %s \% %s \n", $$.dir, dirAlpha1, dirAlpha2);
     }
     | varArray
     | CONSSTRING
     | EXPNUM
     | CONSCHAR
     | ID LPAR paramtrs RPAR {
        $$.tipo = get_tipo($1);
        strcpy($$.dir, $1);
     }
     ;

paramtrs: | listParamtrs 
          ;

listParamtrs: listParamtrs COMMA exprc
            | exprc 
            ;

condic: condic OR {
            addQuad("label", "", "", "__");
        } condic {

        }
      | condic AND {
            addQuad("label", "", "", "__");
      } condic {
          
      }
      | NOT condic 
      | LPAR condic RPAR 
      | exprc relacn exprc {
            
            addQuad("if", temp, "goto", "__");

            addQuad("goto", "", "", "_");


      }
      | TRUE {
            addQuad("goto", "", "", "__");
      }
      | FALSE {
            addQuad("goto", "", "", "__");
      }
      ;

relacn: LESS  {strcpy( $$, $1);}
      | MORE {strcpy( $$, $1);}
      | MOREEQ {strcpy( $$, $1);}
      | LESSEQ {strcpy( $$, $1);}
      | NOTQ {strcpy( $$, $1);}
      | EQUAL2 {strcpy( $$, $1);}
      ; 

%%

void yyerror(char *s){
	printf("%s\n", s);
}

char* newLabel(){
    char labelNumber[10];
    sprintf(labelNumber, "%d", labelCounter);
    strcpy(createdLabel,"L ");
    strcat(createdLabel, labelNumber);
    return createdLabel;
}

char* newTemp(){
    char tempNumber[10];
    sprintf(tempNumber, "%d", labelCounter);
    strcpy(createdTemp,"temp");
    strcat(createdTemp, tempNumber);
    return createdTemp;
}

// los argumentos deben de ser pasados con la funcion sizeof
int max(int a, int b){
    return (a > b) ? a : b;
}

// los argumentos deben de ser pasados con la funcion sizeof
int min(int a, int b){
    return (a < b) ? a : b;
}

void amp(char *dir, int t1, int t2, char* res){
    if(t1 == t2){
        strcpy(res, dir);
    }else if(t1==1 && t2==2){
        char temp[20];
        strcpy(temp , newTemp());
        fprintf(yyout, "%s = (float) %s\n", temp, dir);
        strcpy(res, temp);
    }else if(t1== 2 && t2 == 1){
        char temp[20];
        strcpy(temp , newTemp());
        fprintf(yyout, "%s = (float) %s\n", temp, dir);
        strcpy(res, temp);
    }else{
        yyerror("Error Semántico: Los tipos no son compatibles");
    }
}

int main(int argc, char** argv){
    FILE* file;
    if(argc >1){
        file = fopen(argv[1], "r");
        if(file==NULL){
            printf("no existe el fichero %s\n", argv[1]);
            exit(1);
        }
        char nombre[50];
        strcpy(nombre, argv[1]);
        strcat(nombre, ".ci");
        yyout = fopen(nombre, "w");
        //printf("se abrio el archivo\n");
        yyin = file;        
        //yylval.sval = (char*) malloc(2*sizeof(char));
        yyparse();
        fclose(yyin);
        fclose(yyout);
    }
    
    return 1;
}