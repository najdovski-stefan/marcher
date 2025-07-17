#ifndef _MARCHER_H
#define _MARCHER_H

#include <cstring>
#define MAX_LEXEME_LENGTH 100

enum TokenType{
  TOKEN_UNK,
  TOKEN_EOF,

  TOKEN_LEFT_PAREN,
  TOKEN_RIGHT_PAREN,
  TOKEN_EQ,
  TOKEN_EQ_EQ,
};

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

Lexer lexer;

void initLexer(const char* source){
    lexer.src = source;
    lexer.start = 0;
    lexer.current = 0;
}

static bool isAtEnd(){
    return lexer.src[lexer.current] == '\0';
}

static char advance(){
    lexer.current++;
    return lexer.src[lexer.current-1];
}

static char peek(){
    return lexer.src[lexer.current];
}

static Token createToken(TokenType type) {
    Token token;
    token.type = type;
    int length = lexer.current - lexer.start;

    if(length >= MAX_LEXEME_LENGTH) {
        length = MAX_LEXEME_LENGTH - 1;
    }
    //TODO: make this more safe
    strncpy(token.lexeme, lexer.src + lexer.start, length);
    token.lexeme[length] = '\0';

    return token;
}


#endif //_MARCHER_H
