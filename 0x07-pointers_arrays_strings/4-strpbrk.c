#include <stdio.h>
#include "main.h"
/*
Write a function that searches a string for any of a set of bytes.

Prototype: char *_strpbrk(char *s, char *accept);
The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
    char *p = s; /* declare a pointer to the first string*/
    char *q = accept; /* declare a pointer to the second string*/
    while (*p != '\0') /* loop through the first string until the end*/
    {
        q = accept; /* reset the pointer to the second string*/
        while (*q != '\0') /*loop through the second string until the end*/
        {
            if (*p == *q) /*check if the current byte matches any byte from accept*/
            {
                return p; /* return the pointer to the matching byte in s*/
            }
            q++; /* move the pointer to the next byte in accept*/
        }
        p++; /*move the pointer to the next byte in s*/
    }
    return NULL; /* return NULL if no matching byte is found*/
}

