#include <stdio.h>
#include "main.h"
/*
Write a function that gets the length of a prefix substring.

Prototype: unsigned int _strspn(char *s, char *accept);
Returns the number of bytes in the initial segment of s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)

{
    unsigned int i, j; /*declare variables to loop through the strings*/
    unsigned int count = 0; /*declare a variable to count the matching bytes*/
    for (i = 0; s[i] != '\0'; i++) /* loop through the first string until the end*/
    {
        for (j = 0; accept[j] != '\0'; j++) /* loop through the second string until the end*/
        {
            if (s[i] == accept[j]) /*check if the current byte matches any byte from accept*/
            {
                count++; /* increment the count of matching bytes*/
                break; /*break out of the inner loop*/
            }
        }
        if (accept[j] == '\0') /* check if the end of accept was reached*/
        {
            break; /*break out of the outer loop*/
        }
    }
    return count; /* return the number of matching bytes*/
}

