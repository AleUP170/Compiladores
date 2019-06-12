/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    COMMA = 259,
    POINT = 260,
    SCOLON = 261,
    COLON = 262,
    INT = 263,
    FLOAT = 264,
    DOUBLE = 265,
    CHAR = 266,
    VOID = 267,
    STRUCT = 268,
    IF = 269,
    ELSE = 270,
    WHILE = 271,
    DO = 272,
    SWITCH = 273,
    CASE = 274,
    FOR = 275,
    RETURN = 276,
    BREAK = 277,
    PRINT = 278,
    DEFAULT = 279,
    FUNC = 280,
    TRUE = 281,
    FALSE = 282,
    INTNUM = 283,
    HEXNUM = 284,
    DECNUM = 285,
    EXPNUM = 286,
    CONSCHAR = 287,
    CONSSTRING = 288,
    LPAR = 289,
    RPAR = 290,
    LBRA = 291,
    RBRA = 292,
    LCUR = 293,
    RCUR = 294,
    IFX = 295,
    NOT = 296,
    PLUS2 = 297,
    MINUS2 = 298,
    MUL = 299,
    DIV = 300,
    MOD = 301,
    PLUS = 302,
    MINUS = 303,
    LESS = 304,
    LESSEQ = 305,
    MOREEQ = 306,
    MORE = 307,
    EQUAL2 = 308,
    NOTQ = 309,
    AND = 310,
    OR = 311,
    EQUAL = 312
  };
#endif
/* Tokens.  */
#define ID 258
#define COMMA 259
#define POINT 260
#define SCOLON 261
#define COLON 262
#define INT 263
#define FLOAT 264
#define DOUBLE 265
#define CHAR 266
#define VOID 267
#define STRUCT 268
#define IF 269
#define ELSE 270
#define WHILE 271
#define DO 272
#define SWITCH 273
#define CASE 274
#define FOR 275
#define RETURN 276
#define BREAK 277
#define PRINT 278
#define DEFAULT 279
#define FUNC 280
#define TRUE 281
#define FALSE 282
#define INTNUM 283
#define HEXNUM 284
#define DECNUM 285
#define EXPNUM 286
#define CONSCHAR 287
#define CONSSTRING 288
#define LPAR 289
#define RPAR 290
#define LBRA 291
#define RBRA 292
#define LCUR 293
#define RCUR 294
#define IFX 295
#define NOT 296
#define PLUS2 297
#define MINUS2 298
#define MUL 299
#define DIV 300
#define MOD 301
#define PLUS 302
#define MINUS 303
#define LESS 304
#define LESSEQ 305
#define MOREEQ 306
#define MORE 307
#define EQUAL2 308
#define NOTQ 309
#define AND 310
#define OR 311
#define EQUAL 312

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "parser.y" /* yacc.c:1909  */


    /// Datos necesarios para ingresar a la tabla de simbolos
    struct{
        char *id;
        int tipo;
        char *tipoVar;
        int direccion;
        int tipoArgs;
        int numArgs;
        char *ambito;
    }id;

    lista *headCI;

    struct{


    }boolean;
    
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

#line 208 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
