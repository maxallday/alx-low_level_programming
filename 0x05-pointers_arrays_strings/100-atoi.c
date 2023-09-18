/* 
 * Write a function that convert a string to an integer.

Prototype: int _atoi(char *s);
The number in the string can be preceded by an infinite number of characters
You need to take into account all the - and + signs before the number
If there are no numbers in the string, the function must return 0
You are not allowed to use long
*/
#include <stdio.h>
#include "main.h"
/* Prototype: int _atoi(char *s);*/
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int i = 0;
    /* skip any non-digit characters*/
    while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
    {
        /* check for sign*/
        if (s[i] == '-')
        {
            sign = -sign;
        }
        i++;
    }
    /* convert digits to integer*/
    while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }
    /* return the result with sign*/
    return sign * result;
}

int main()
{
    /* Declare and initialize a string*/
    char s[] = "Hello -42";
    /* Print its integer value using the _atoi function*/
    printf("Integer value: %d\n", _atoi(s));
    return 0;
}

