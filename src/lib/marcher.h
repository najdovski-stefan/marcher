#ifndef _MARCHER_H
#define _MARCHER_H

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

#endif //_MARCHER_H
