/*Prototype: char *_strcpy(char *dest, char *src);
Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

Return value: the pointer to dest*/
#include <stdio.h>
#include"main.h"
/* Prototype: char *copy_string(char *dest, const char *src);*/
char *copy_string(char *dest, const char *src)
{
    char *p = dest;
    while (*src != '\0')
    {
        *p = *src;
        p++;
        src++;
    }
    *p = '\0';
    return dest;
}

int main()
{
    /*Declare and initialize an array of chars*/
    char buffer[20];
    /* Copy a string into the buffer using the copy_string function*/
    copy_string(buffer, "Hello World");
    /* Print the buffer*/
    printf("Buffer: %s\n", buffer);
    return 0;
}

