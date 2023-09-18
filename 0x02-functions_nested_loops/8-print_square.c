#include <stdio.h>
#include "main.h"
/* Prototype of _putchar function*/
int _putchar(char c);

/* Function that prints a square of size x size*/
void print_square(int size)
{
    /* If size is positive, loop size times*/
    if (size > 0)
    {
        /* For each iteration, print size hashes and a new line*/
        for (int i = 0; i < size; i++)
        {
 
            for (int j = 0; j < size; j++)
            {
                _putchar('#');
            }
           
            _putchar('\n');
        }
    }
    else
    {
       
        _putchar('\n');
    }
}
