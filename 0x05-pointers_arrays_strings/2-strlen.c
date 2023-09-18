/*Write a function that returns the length of a string.
*/
/*Prototype: int _strlen(char *s);*/
#include <stdio.h>
#include "main.h"
#include <stdio.h>


int _strlen(char *s)
{
    int len = 0;
    while (*s != '\0')
    {
        len++;
        s++;
    }
    return len;
}

int main()
{
    /* Declare and initialize a char array*/
    char str[] = "Hello World";
    /* Print its length using the _strlen function*/
    printf("Length of string is : %d\n", _strlen(str));
    return 0;
}

