#include<stdio.h>
/*Write a function that checks for uppercase character.
Prototype: int _isupper(int c);
Returns 1 if c is uppercase
Returns 0 otherwise
*/
#include <stdio.h>

/* Prototype: int _isupper(int c);
 Returns 1 if c is uppercase
 Returns 0 otherwise*/
int _isupper(int c)
{
    /*SCII value of 'A' is 65 and 'Z' is 90*/
    if (c >= 65 && c <= 90)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

