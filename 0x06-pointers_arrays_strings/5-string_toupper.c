#include<stdio.h>
#include "main.h"

/* A function that changes all lowercase letters of a string to uppercase */
char *string_toupper(char *str)
{
    /* A loop that iterates over each character of the string */
    for (int i = 0; str[i] != '\0'; i++)
    {
        /* If the character is a lowercase letter */
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            /* Subtract 32 from its ASCII value to get the uppercase letter */
            str[i] -= 32;
        }
    }
    /* Return the pointer to the modified string*/
    return str;
}

int main()
{
    /* An example string*/
    char str[] = "Hello World!";
    /* Print the original string*/
    printf("Original string: %s\n", str);
    /* Change all lowercase letters to uppercase*/
    string_toupper(str);
    /* Print the modified string*/
    printf("Uppercase string: %s\n", str);
    return 0;
}

