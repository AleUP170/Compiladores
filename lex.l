%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tokens.h"
%}

%{
    /*  Se definen las expresiones regulares a usar
    *   
    *   Realizadas por: Alejandro Ugalde Pérez,
    *             		Héctor Manuel Chávez Troncoso,
    *					Federico Villegas Estrada 
    */
%}

%option yylineno

digito [0-9]
letraguion [A-Za-z_]
hex 0x[a-fA-F0-9]
exponente [Ee][+-]?{digito}+
otroschar [\x20-\x40\x5B-\x5E\x60\x7B-\x7E]
id {letraguion}({letraguion}|{digito})*
entero {digito}+
decimal ({digito}*\.{digito}+)|({digito}+\.{digito}*)
exp {decimal}{exponente}
ascii ({digito}|{letraguion}|{otroschar})
caracter '{ascii}'
cadena "{ascii}+"
comentario ¡\*([^*]|\*[^¿])*\*¿
whitespace [ \n\t\v\f\r]
%%

%{
    /*  Se contruye el analizador lexico con todo lo que debería reconocer
    *   el lenguaje
    *   
    *   Realizado por:  Alejandro Ugalde Pérez
    *                y  Héctor Manuel Chávez Troncoso
    */
%}

%{
    /* Comentarios */
%}

{comentario} {}

%{
    /* Palabras reservadas */
%}

"entero"    {return INT;}
"real"      {return FLOAT;}
"doble"     {return DOUBLE;}
"caracter"  {return CHAR;}
"vacio"     {return VOID;}
"conjunto"  {return STRUCT;}
"si"        {return IF;}
"sino"      {return ELSE;}
"mientras"  {return WHILE;}
"hacer"     {return DO;}
"regresar"  {return RETURN;}
"elegir"    {return SWITCH;}
"romper"    {return BREAK;}
"imprimir"  {return PRINT;}
"funcion"   {return FUNC;}
"caso"      {return CASE;}
"defecto"   {return DEFAULT;}
"VERDADERO" {return TRUE;}
"FALSO"     {return FALSE;}

%{
    /* Símbolos especiales*/
%}

"OU"        {return OR;}
"ET"        {return AND;}
"NON"       {return NOT;}

"("         {return LPAR;}
")"         {return RPAR;}
"["         {return LBRA;}
"]"         {return RBRA;}
"{"         {return LCUR;}
"}"         {return RCUR;}
"++"        {return PLUS2;}
"--"        {return MINUS2;}
"*"         {return MUL;}
"/"         {return DIV;}
"%"         {return MOD;}
"+"         {return PLUS;}
"-"         {return MINUS;}
"<"         {return LESS;}
"<="        {return LESSEQ;}
">"         {return MORE;}
">="        {return MOREEQ;}
"=="        {return EQUAL2;}
"!="        {return NOTQ;}
"="         {return EQUAL;}
";"		    {return SCOLON;}
","		    {return COMMA;}
":"         {return COLON;}
"."         {return POINT;}

%{
    /* Datos para variables */
%}

{entero}    {return INTNUM;}
{hex}       {return HEXNUM;}
{decimal}   {return DECNUM;}
{exp}       {return EXPNUM;}
{id}        {return ID;}
{caracter}  {return CONSCHAR;}
{cadena}    {return CONSSTRING;}

%{
    /* Espacios en blanco */
%}

{whitespace}    {}

%%



/*  Función main
*   Recive un archivo de entrada (código en el lenguaje reconocido por el lexer)
*   Reconoce si el archivo no existe y sale del programa si es el caso
*   Si existe, continua con las siguientes funciones
*   Imprime el token reconocido, así como el tipo de token
*   Los tipos de tokens están definidos en tokens.h
*   
*   Programada por: Alejandro Ugalde Pérez
*/

int main (int argc, char** argv){ 
    if (argc < 2) { 
    	printf("Falta archivo a leer\n");
    	exit(1);
	}
	
	yyin = fopen(argv[1], "r");
	
	/* Archivo no existe */
	if (!yyin) { 
    	printf("Archivo no existente\n");
    	exit(1);
	}

    /* Archivo si existe */
    int tokenNum;
    while(tokenNum = yylex()){
        printf("%s, token: %d\n",yytext,tokenNum);
    }
    fclose(yyin);
    return 0;
}

int yywrap(){
	return 1;
}
