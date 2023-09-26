#include<stdio.h>
#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i; /* declare a variable to loop through the memory area*/
    char *p = dest; /* declare a pointer to the destination memory area*/
    for (i = 0; i < n; i++) /* loop through the first n bytes*/
    {
        p[i] = src[i]; /* copy each byte from source to destination*/
    }
    return dest; /* return the pointer to the destination memory area*/
}

