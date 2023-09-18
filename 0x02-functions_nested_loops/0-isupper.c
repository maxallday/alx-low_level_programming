/* Prototype: int _isupper(int c);
 Returns 1 if c is uppercase  Returns 0 otherwise
 */
#include<stdio.h>
#include "main.h"
int _isupper(int c)
{
    /* Check if c is in the range of ASCII codes for uppercase letters*/
    if (c >= 65 && c <= 90)
    {
        /* Return 1 if true*/
        return 1;
    }
    else
    {
        /*Return 0 otherwise*/
        return 0;
    }
}

