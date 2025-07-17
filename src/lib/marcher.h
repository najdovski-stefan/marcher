#ifndef _MARCHER_H
#define _MARCHER_H
#include <stdbool.h>
#include <string.h>
#define MAX_LEXEME_LENGTH 100

typedef enum TokenType{
  TOKEN_UNK,
  TOKEN_EOF,

  TOKEN_LEFT_PAREN,
  TOKEN_RIGHT_PAREN,
  TOKEN_EQ,
  TOKEN_EQ_EQ,
}TokenType;

typedef struct Token{
    TokenType type;
    char lexeme[MAX_LEXEME_LENGTH];
    //int len;
}Token;

typedef struct Lexer{
    const char *src;
    int start;
    int current;
}Lexer;

void initLexer(const char* source);
static bool isAtEnd();
static char advance();
static char peek();
static Token createToken(TokenType type);


#endif //_MARCHER_H
