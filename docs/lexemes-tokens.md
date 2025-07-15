# Lexemes and Tokens

## Lexemes

Substrings from the source code.

We have a buffer of characters, and we group them into something that makes sense.

Lexeme{
    source_file;
    TokenType;
    line_in_file;
    offset?;
}

### TokenType

- Single characters
- Literals
    - Identifiers
    - Strings 
    - Numbers
- Keywords 
- EOF/UNK?
