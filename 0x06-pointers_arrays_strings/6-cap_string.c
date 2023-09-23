#include <stdio.h>
#include <ctype.h>
#include"main.h"
/* A function that capitalizes all words of a string*/
char *cap_string(char *str)
{
    /* A loop that iterates over each character of the string*/
    for (int i = 0; str[i] != '\0'; i++)
    {
        /* If the character is the first letter of a word*/
        if (i == 0 || isspace(str[i - 1]) || ispunct(str[i - 1]))
        {
            /* Convert it to uppercase using the toupper() function*/
            str[i] = toupper(str[i]);
        }
    }
    */ Return the pointer to the modified string*/
    return str;
}

int main()
{
    /* An example string*/
    char str[] = "hello, world! how are you today?";
    /* Print the original string*/
    printf("Original string: %s\n", str);
    /* Capitalize all words of the string*/
    cap_string(str);
    /* Print the modified string*/
    printf("Capitalized string: %s\n", str);
    return 0;
}

