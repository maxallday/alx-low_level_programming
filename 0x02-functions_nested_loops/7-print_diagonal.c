#include <stdio.h>

/* Prototype of _putchar function*/
int _putchar(char c);

/* Function that prints a diagonal line of n backslashes*/
void print_diagonal(int n)
{
    /* If n is positive, loop n times*/
    if (n > 0)
    {
        /* For each iteration, print i spaces and one backslash*/
        for (int i = 0; i < n; i++)
        {
            
            for (int j = 0; j < i; j++)
            {
                _putchar(' ');
            }
            
            _putchar('\\');
           
            _putchar('\n');
        }
    }
    else
    {
        
        _putchar('\n');
    }
}

