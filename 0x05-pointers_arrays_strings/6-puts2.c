#include <stdio.h>
#include "main.h"
/* Prototype: void puts2(char *str);*/
void puts2(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        putchar(str[i]);
        i += 2;
    }
    putchar('\n');
}

int main()
{
    /* Declare and initialize a char array*/
    char str[] = "Hello World";
    /* Print every other character using the puts2 function*/
    puts2(str);
    return 0;
}

