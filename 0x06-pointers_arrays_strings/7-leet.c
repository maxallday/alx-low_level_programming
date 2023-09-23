#include <stdio.h>
#include "main.h"

/* A function that encodes a string into 1337*/
char *leet(char *str)
{
    /* An array of characters that contains the original letters and their 1337 replacements*/
    char leet[256] = {
        ['a'] = '4', ['A'] = '4',
        ['e'] = '3', ['E'] = '3',
        ['o'] = '0', ['O'] = '0',
        ['t'] = '7', ['T'] = '7',
        ['l'] = '1', ['L'] = '1'
    };

    /* A loop that iterates over each character of the string*/
    for (int i = 0; str[i] != '\0'; i++)
    {
        /* If the character has a 1337 replacement*/
        if (leet[(unsigned char)str[i]] != '\0')
        {
            /* Replace it with the 1337 character*/
            str[i] = leet[(unsigned char)str[i]];
        }
    }
    /* Return the pointer to the modified string*/
    return str;
}

int main()
{
    */ An example string*/
    char str[] = "Hello World!";
    /* Print the original string*/
    printf("Original string: %s\n", str);
    /* Encode the string into 1337*/
    leet(str);
    /* Print the encoded string*/
    printf("Encoded string: %s\n", str);
    return 0;
}

