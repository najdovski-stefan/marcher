#ifndef _MARCHER_H
#define _MARCHER_H

enum TokenType{
  TOKEN_UNK,
  TOKEN_EOF,

  TOKEN_LEFT_PAREN,
  TOKEN_RIGHT_PAREN,
  TOKEN_EQ,
  TOKEN_EQ_EQ,


};


//something to start with
typedef struct Marcher{
  char* src;
  int line;
  int len;
}Marcher;

#endif //_MARCHER_H
