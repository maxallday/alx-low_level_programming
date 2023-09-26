#include "main.h"
#include <stdio.h>
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i; /* declare a variable to loop through the memory area*/
    char *p = s; /* declare a pointer to the memory area*/
    for (i = 0; i < n; i++) /* loop through the first n bytes*/
    {
        p[i] = b; /* assign the constant byte b to each byte*/
    }
    return s; /*return the pointer to the memory area*/
}

