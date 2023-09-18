/*Write a function that prints a string, followed by a new line, to stdout.

Prototype: void _puts(char *str);*/
#include <stdio.h>
#include "main.h"
void _puts(char *str)
{
    while (*str != '\0')
    {
        putchar(*str);
        str++;
    }
    putchar('\n');
}

int main()
{
    /* Declare and initialize a char array*/
    char str[] = "Striving for 80%";
    /* Print it using the _puts function*/
    _puts(str);
    return 0;
}

