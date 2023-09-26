#include <stdio.h>
#include "main.h"
/*
Write a function that locates a substring.

Prototype: char *_strstr(char *haystack, char *needle);
The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
*/
char *_strstr(char *haystack, char *needle)
{
    char *p = haystack; /*declare a pointer to the haystack string*/
    char *q = needle; /*declare a pointer to the needle string*/
    char *r; /*declare a pointer to store the beginning of the located substring*/
    if (*q == '\0') /*check if the needle string is empty*/
    {
        return p; /*return the pointer to the haystack string*/
    }
    while (*p != '\0') /*loop through the haystack string until the end*/
    {
        r = p; /*store the current position of the pointer in r*/
        q = needle; /*reset the pointer to the needle string*/
        while (*p == *q && *p != '\0' && *q != '\0') /* loop through both strings while they match and are not null*/
        {
            p++; /*move the pointer to the next character in the haystack string*/
            q++; /*move the pointer to the next character in the needle string*/
        }
        if (*q == '\0') /*check if the end of the needle string was reached*/
        {
            return r; 
        }
        p = r + 1; /* move the pointer to the next character in the haystack string*/
    }
    return NULL;  
}


