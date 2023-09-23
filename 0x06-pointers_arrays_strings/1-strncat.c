#include <stdio.h>
#include "main.h"
/* Prototype: char *_strncat(char *dest, char *src, int n);
 The _strncat function is similar to the _strcat function, except that
 it will use at most n bytes from src; and
 src does not need to be null-terminated if it contains n or more bytes
 Return a pointer to the resulting string dest 
 */
char *_strncat(char *dest, char *src, int n)
{
    /* Find the length of dest*/
    int len = 0;
    while (dest[len] != '\0')
    {
        len++;
    }

    /* Append n bytes of src to dest*/
    for (int i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[len + i] = src[i];
    }

    /* Add a null terminator to dest*/
    dest[len + n] = '\0';

    /* Return the pointer to dest*/
    return dest;
}

