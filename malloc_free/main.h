#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

char *create_array(unsigned int size, char c);
char *_memset(char *s, char b, unsigned int n);

char *_strdup(char *str);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

char *str_concat(char *s1, char *s2);
char *_strcat(char *dest, char *src);
#endif
