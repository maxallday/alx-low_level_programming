/*Write a function that reverses a string.

Prototype: void rev_string(char *s*/
#include <stdio.h>
#include <string.h>
#include "main.h"

void rev_string(char *s)
{
    int i = 0;
    int j = strlen(s) - 1;
    char temp;
    while (i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    /* Declare and initialize a char array*/
    char str[] = "Hello World";
    /* Print it before reversing*/
    printf("Before reversing: %s\n", str);
    /* Call the rev_string function*/
    rev_string(str);
    /* Print it after reversing*/
    printf("After reversing: %s\n", str);
    return 0;
}

