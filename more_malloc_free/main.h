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
char *_strcat(char *dest, char *src) ;
char *_strncat(char *dest, char *src, int n) ;
#endif
