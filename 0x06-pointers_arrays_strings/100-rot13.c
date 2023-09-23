#include <stdio.h>
#include "main.h"
#include <ctype.h>
/* A function that encodes a string using rot13*/
char *rot13(char *str)
{
    /* A loop that iterates over each character of the string*/
    for (int i = 0; str[i] != '\0'; i++)
    {
        /* If the character is an alphabetic letter*/
        if (isalpha(str[i]))
        {
            /* Add 13 to its ASCII value*/
            str[i] += 13;
            /* If the character goes beyond the range of 'A' to 'Z'*/
            if (str[i] > 'Z' && str[i] < 'a')
            {
                /*Wrap around by subtracting 26*/
                str[i] -= 26;
            }
            /* If the character goes beyond the range of 'a' to 'z'*/
            else if (str[i] > 'z')
            {
                /* Wrap around by subtracting 26*/
                str[i] -= 26;
            }
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
    /* Encode the string using rot13*/
    rot13(str);
    /* Print the encoded string*/
    printf("Encoded string: %s\n", str);
    return 0;
}

