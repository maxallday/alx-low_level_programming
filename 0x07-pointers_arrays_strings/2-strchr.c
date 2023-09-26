#include <stdio.h>
#include "main.h"
char *_strchr(char *s, char c)
{
    char *p = s; /* declare a pointer to the string*/
    while (*p != '\0') /* loop through the string until the end*/
    {
        if (*p == c)/* check if the current character matches c*/
        {
            return p; /* return the pointer to the first occurrence of c*/
        }
        p++; /* move the pointer to the next character*/
    }
    return NULL; /* return NULL if c is not found*/
}

