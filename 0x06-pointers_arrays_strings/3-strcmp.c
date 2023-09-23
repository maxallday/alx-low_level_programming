#include<stdio.h>
#include"main.h"
/*     
 *     Write a function that compares two strings.

Prototype: int _strcmp(char *s1, char *s2);
Your function should work exactly like strcmp
 *     
 *     */

int _strcmp(char *s1, char *s2)
{
    char *s1 = "Software";
    char *s2 = "Engineering";
    int result;

    result = strcmp(s1, s2);

    if (result == 0)
    {
        printf("The strings are equal\n");
    }
    else if (result > 0)
    {
        printf("The first string is greater than the second\n");
    }
    else
    {
        printf("The first string is less than the second\n");
    }

    return 0;
}

