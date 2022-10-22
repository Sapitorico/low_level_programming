#ifndef MAIN_H
#define MAIN_H
/*libreries*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/*prototypes*/

void *malloc_checked(unsigned int b);

char *string_nconcat(char *s1, char *s2, unsigned int n);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src);

void *_calloc(unsigned int nmemb, unsigned int size);
char *_memset(char *s, char b, unsigned int n); 

int *array_range(int min, int max);
#endif
