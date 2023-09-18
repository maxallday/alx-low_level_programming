/*Write a function that prints half of a string, followed by a new line.

Prototype: void puts_half(char *str);
The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2*/

#include <stdio.h>
#include <string.h>
#include "main.h"

/* Prototype: void puts_half(char *str);*/
void puts_half(char *str)
{
    int len = strlen(str);
    int mid = (len - 1) / 2; /* find the midpoint of the string*/
    for (int i = mid + 1; i < len; i++) /* start printing from the midpoint + 1*/
    {
        putchar(str[i]);
    }
    putchar('\n'); /*print a new line*/
}

int main()
{
    /* Declare and initialize a char array*/
    char str[] = "Hello World";
    /* Print half of it using the puts_half function*/
    puts_half(str);
    return 0;
}

