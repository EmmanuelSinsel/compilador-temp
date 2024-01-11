%{
#include <stdio.h>
#include "y.tab.h"
%}
tip "entero"|"decimal"|"letra"|"cadena"|"doble"
nr [1-9][0-9]*
cuvant [_a-zA-Z][_a-zA-Z0-9]*
caracter \'[a-zA-Z]\'
caractere \"[a-zA-Z][a-zA-Z]*\"
include1 \<{cuvant}.h\>
include2 \<{cuvant}\>

%%
struct {return STRUCT;}

"constante" {return CONST;}

"imprimir" {return PRINT;}

"printf" {return PRINTF;}

"retornar" { return RETURN; }

"#incluir"[ ]*({include1}|{include1}) { return LIBRARIE; }

("vacio"|"entero")[ ]+main\(\) { return MAIN; }

"strcpy" {return STRCPY;}

"strcmp" {return STRCMP;}

"*" { return PRODUS; }

"/" { return IMPARTIRE; }

"+" { return PLUS; }

"-" { return MINUS; }

">" { return MMARE; }

"<" { return MMIC; }

"diferente" { return DIFERIT; }

"igual" { return EGAL; }

"||" { return SAU; }

"&&" { return SI; }

"si" { return IF; }

"sino" {return ELSE;}

"mientras" { return WHILE; }

"para" { return FOR; }

("entero"|"decimal"|"letra"|"cadena") { strcpy(yylval.strval, yytext); return TIP;}

{cuvant}(\[{nr}\])+ { strcpy(yylval.strval, yytext); return VECTOR; }

{caracter}|{caractere} { strcpy(yylval.strval, yytext); return CARACTER; }

0|[1-9][0-9]* { strcpy(yylval.strval, yytext); return NUMAR; }

{cuvant} { strcpy(yylval.strval, yytext); return NUME; }

":=" { return ATRIBUIRE; }

[ \t] ;

\n {yylineno++;}

. {return yytext[0];}
