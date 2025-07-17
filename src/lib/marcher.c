#include "marcher.h"
#include <stdbool.h>
#include <string.h>


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
