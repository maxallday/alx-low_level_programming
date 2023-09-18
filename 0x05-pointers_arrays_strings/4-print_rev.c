/*Write a function that prints a string, in reverse, followed by a new line.

Prototype: void print_rev(char *s);*/
#include <stdio.h>
#include "main.h";

void print_rev(char *s)
{
    int i = 0;
    int len = 0;
    /* find the length of the string*/
    while (s[i] != '\0')
    {
        len++;
        i++;
    }
    /* print the string in reverse order*/
    for (i = len - 1; i >= 0; i--)
    {
        putchar(s[i]);
    }
    /* print a new line*/
    putchar('\n');
}

int main()
{
    /* Declare and initialize a char array*/
    char str[] = "Hello World";
    /* Print it in reverse order using the print_rev function*/
    print_rev(str);
    return 0;
}
i
