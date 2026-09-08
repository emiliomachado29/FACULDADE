#ifndef MSTRING_H
#define MSTRING_H

int mstrlen(char s[]);
void mstrcpy(char dest[], char orig[]);
void mstrcat(char dest[], char orig[]);
int mstrcmp(char a[], char b[]);
void mstrupper(char s[]);
void mstrlower(char s[]);
int mcount_vogais(char s[]);
int meh_palindromo(char s[]);
void mremove_espacos(char s[]);

#endif