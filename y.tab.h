/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    STRCPY = 258,                  /* STRCPY  */
    CONST = 259,                   /* CONST  */
    STRCMP = 260,                  /* STRCMP  */
    PRINT = 261,                   /* PRINT  */
    PRINTF = 262,                  /* PRINTF  */
    INICIO = 263,                  /* INICIO  */
    FIN = 264,                     /* FIN  */
    HASTA = 265,                   /* HASTA  */
    CON = 266,                     /* CON  */
    PASO = 267,                    /* PASO  */
    LIBRARIE = 268,                /* LIBRARIE  */
    MAIN = 269,                    /* MAIN  */
    TIP = 270,                     /* TIP  */
    NUME = 271,                    /* NUME  */
    VECTOR = 272,                  /* VECTOR  */
    CARACTER = 273,                /* CARACTER  */
    NUMAR = 274,                   /* NUMAR  */
    STRUCT = 275,                  /* STRUCT  */
    ATRIBUIRE = 276,               /* ATRIBUIRE  */
    MMARE = 277,                   /* MMARE  */
    MMIC = 278,                    /* MMIC  */
    DIFERIT = 279,                 /* DIFERIT  */
    EGAL = 280,                    /* EGAL  */
    PRODUS = 281,                  /* PRODUS  */
    IMPARTIRE = 282,               /* IMPARTIRE  */
    PLUS = 283,                    /* PLUS  */
    MINUS = 284,                   /* MINUS  */
    SI = 285,                      /* SI  */
    SAU = 286,                     /* SAU  */
    IF = 287,                      /* IF  */
    ELSE = 288,                    /* ELSE  */
    FOR = 289,                     /* FOR  */
    WHILE = 290,                   /* WHILE  */
    RETURN = 291                   /* RETURN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define STRCPY 258
#define CONST 259
#define STRCMP 260
#define PRINT 261
#define PRINTF 262
#define INICIO 263
#define FIN 264
#define HASTA 265
#define CON 266
#define PASO 267
#define LIBRARIE 268
#define MAIN 269
#define TIP 270
#define NUME 271
#define VECTOR 272
#define CARACTER 273
#define NUMAR 274
#define STRUCT 275
#define ATRIBUIRE 276
#define MMARE 277
#define MMIC 278
#define DIFERIT 279
#define EGAL 280
#define PRODUS 281
#define IMPARTIRE 282
#define PLUS 283
#define MINUS 284
#define SI 285
#define SAU 286
#define IF 287
#define ELSE 288
#define FOR 289
#define WHILE 290
#define RETURN 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "compilator.y"

char strval[2048];
int intval;

#line 144 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
